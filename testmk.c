#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"

FILE *output;
char *program;

enum test_element_type
{
	SectionHeaderElem,
	ExerciseElem,
	TextElem,
	FillinElem,
};

void
die(char *msg)
{
	fprintf(stderr, "%s: %s\n", program, msg);
	exit(1);
}

void
generate_uniq_id(char *output)
{
	int i;
	for (i = 0; i < 16; ++i) {
		output[i] = 'a' + rand() % 26;
	}
}

void
convert()
{
	int fillin_mode = 0;
	int fillin_len = 0;
	int newline = 1;
	int radio_streak = 0;
	char radio_id[17] = { 0 };
	char uniq_radio_id[17] = { 0 };
	int c;
	generate_uniq_id(radio_id);
	fputs("<p>\n\t", output);
	while ((c = fgetc(stdin)) != EOF) {
		if (newline && c != '<') {
			if (radio_streak) {
				generate_uniq_id(radio_id);
			}

			radio_streak = 0;
		}
		switch (c) {
		case '[':
			if (fillin_mode)
				die("parse error: unexpected '[' in fillin mode");
			fillin_mode = 1;
			fillin_len = 0;
			break;
		case ']':
			if (!fillin_mode)
				die("parse error: unexpected ']' outside fillin mode");
			fillin_mode = 0;
			fprintf(output,
			        "<input type=\"text\" class=\"inline\" size=\"%d\">",
			        (int) (fillin_len * 2.2));
			break;
		case '<':
			if (newline) {
				c = fgetc(stdin);
				c = fgetc(stdin);
				if (c == EOF)
					return;
				radio_streak = 1;
				generate_uniq_id(uniq_radio_id);
				fprintf(output,
				        "\n<input type=\"radio\" name=\"%s\" id=\"%s\" value=\"%s\"><label for=\"%s\">",
				        radio_id, uniq_radio_id, uniq_radio_id, uniq_radio_id);
				while ((c = fgetc(stdin)) != EOF && c != '\n') {
					fputc(c, output);
				}
				fputs("</label>\n", output);
				break;
			}
			/* else FALLTHROUGH */
		case '*':
			if (newline) {
				while ((c = fgetc(stdin)) != EOF && c != '\n') {
				}
				fprintf(output, "<input type=\"text\">");
				break;
			}
			/* else FALLTHROUGH */
		default:
			if (!fillin_mode)
				fputc(c, output);
			break;
		}
		if (fillin_mode)
			++fillin_len;
		if (newline) {
			newline = 0;
			if (c == '\n' && !radio_streak) {
				fputs("\n</p>\n<p>\n\t", output);
			}
		}
		if (c == '\n')
			newline = 1;
	}
	fputs("\n</p>", output);
}

int
main(int argc, char **argv)
{
	program = argv[0];
	if (argc > 1) {
		output = fopen(argv[1], "r");
		if (!output) {
			perror(
	output = stdout;
	printf("%s", html_header_part1);
	printf("%s", "testmk document");
	printf("%s", html_header_part2);
	convert();
}
