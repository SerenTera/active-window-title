const activeWindow = require('./build/Release/activeWindowTitle.node');
let processTitle ="TERA";

console.time('test')

let title = activeWindow.title()

console.timeEnd('test')
console.log('henlo')
console.log(title)

module.exports = activeWindow;