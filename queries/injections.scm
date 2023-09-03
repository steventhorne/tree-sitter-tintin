(
 (command (command_identifier) ((block (string) @injection.content))) @comment
 (#lua-match? @comment "^#[nN][oO][pP]")
 (#set! injection.language "comment")
)
