function createArrayOfFunctions(y) {
  var arr = [];
  for(var i = 0; i<y; i++) {
    arr[i] = function(x) { return x + i; }
  }
  return arr;
}

The above code encounter a scope problem. To fix it, we may change line 2 "var arr = [];" to "let arr = []" and
line 3 "for (var i = 0; i<y; i++)" to "for (let i = 0; i<y; i++)".
