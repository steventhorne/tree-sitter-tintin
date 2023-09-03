; Comments
(
 (command (command_identifier)) @comment
 (#lua-match? @comment "^#[nN][oO][pP]")
 (#set! "priority" 110)
)

; Variables
; () @variable

; Functions
(command_identifier) @function

; Parameters
(block
  (string) @parameter)
(command
  (word) @parameter)

; Punctuation
