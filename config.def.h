/* Minified style.css */
#define HTML_STYLE                                                             \
  "body{font-family:'Courier "                                                 \
  "New',Courier,monospace;font-size:16px;max-width:650px;margin:48px "         \
  "auto}h1,h2,h3{font-weight:700}h1{font-size:32px;margin-bottom:32px}h2{"     \
  "font-size:24px}h3{font-size:16px}.exercise{margin-left:1em}input{font:"     \
  "inherit;display:block;width:100%;border-top:none;border-left:none;border-"  \
  "right:none;border-bottom:solid 2px "                                        \
  "#000}input.inline{display:inline;width:auto}"

#define HTML_HEADER_PART1                                                      \
  "<!doctype html>\n"                                                          \
  "<html>\n"                                                                   \
  "\t<head>\n"                                                                 \
  "\t\t<title>"

#define HTML_HEADER_PART2                                                      \
  "</title>\n"                                                                 \
  "\t\t<style>" HTML_STYLE "</style>\n"                                        \
  "\t</head>\n"                                                                \
  "\t<body>\n"

#define HTML_FOOTER                                                            \
  "\t</body>\n"                                                                \
  "</html>\n"
