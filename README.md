# active-window-title
NodeJS addon that returns the current foreground window title

## Build
Run `npm run build` with the cli argument `--arch` to choose the architecture to build the addon with. Generally you will need to build both `ia32` and `x64` for windows.

## Usage
Place activeWindowTitle.node from build/Releases into your project and require it. Call the title function using title().

```
const activeWindow = require('./activeWindowTitle.node')

//Display title of current foreground window
console.log(activeWindow.title()) 
```
## Module
The `activeWindowTitle` Folder is also a module in itself that has prebuilt binaries for x64 and ia32 architecture, with a wrapper to select the appropriate one for the current node environment. A rebuild should not be necessary for future node versions.

```
const activeWindow = require('activeWindowTitle')

//Display title of current foreground window
console.log(activeWindow.title()) 
```
## Advice
Advice is appreciated if anyone is experienced in creating a simple interface to use windows native methods in nodeJS using no dependencies.
