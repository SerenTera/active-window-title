# active-window-title
NodeJS addon that returns the current foreground window title

## Usage
Place activeWindowTitle.node from build/Releases into your project and require it. Call the title function using title().

```
const activeWindow = require('./activeWindowTitle.node')

//Display title of current foreground window
console.log(activeWindow.title()) 
```

## Advice
Advice is appreciated if anyone is experienced in creating a simple interface to use windows native methods in nodeJS using no dependencies.
