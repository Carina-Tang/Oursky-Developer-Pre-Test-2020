function createArrayOfFunctions(y) {
var arr = [];
for(var i = 0; i<y; i++) {
arr[i] = function(x) { return x + i; }
}
return arr;
}

