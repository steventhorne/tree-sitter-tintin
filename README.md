# Installation

Add the following blocks of code to your nvim `init.lua`.

## Filetype autocommand
```lua
vim.cmd([[ au! BufRead,BufNewFile *.tt set filetype=tintin ]])
```
Alternatively, replace `*.tt` with your preferred tintin file extension.

## Tree-sitter parser config
```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.tintin = {
    install_info = {
        url = "https://github.com/steventhorne/tree-sitter-tintin.git",
        files = { "src/parser.c" },
    },
}
```

## Queries
Copy the contents of the `queries` folder to `NVIM_CONFIG_PATH/queries/tintin/`.

## TSInstall
Run `TSInstall tintin`.
