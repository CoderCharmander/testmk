/* Minified style.css */
#define HTML_STYLE "body{font-family:'Courier New',Courier,monospace;font-size:16px;max-width:650px;margin:48px auto;line-height:1.5}h1,h2,h3{font-weight:700}h1{font-size:32px;margin-bottom:32px}h2{font-size:24px}h3{font-size:16px}.exercise{margin-left:1em}input[type=\"text\"]{font:inherit;display:block;width:100%;border-top:none;border-left:none;border-right:none;border-bottom:solid 1px #000;margin:0;padding:0}input.inline{display:inline;width:auto}input:focus{border-bottom:solid 2px #000}"
const char *html_header_part1 =
    "<!doctype html>\n<html>\n\t<head>\n\t\t<title>";
const char *html_header_part2 =
    "</title>\n\t\t<style>" HTML_STYLE "</style>\n\t</head>\n\t<body>\n";
const char *html_footer = "\t</body>\n</html>\n";
