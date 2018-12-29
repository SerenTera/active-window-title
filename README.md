# active-window-title
NodeJS addon that returns the current foreground window title

## Usage
Place activeWindowTitle.node from build/Releases into your project and require it. Call the title function using title().

```
const activeWindow = require('./activeWindowTitle.node')

//Display title of current foreground window
console.log(activeWindow.title()) 
```

## To-Do
Convert code to asynchronus function to maintain Tera-Proxy stability. Currently code takes ~10-15ms per call.
