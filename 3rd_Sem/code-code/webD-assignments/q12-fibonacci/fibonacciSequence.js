let n = 10; // Number of terms you want in the Fibonacci sequence
let a = 0, b = 1, nextTerm;

document.write(" <h2> Fibonacci Sequence: </h2> ");


for (let i = 1; i <= n; i++) {
   document.write(`${a}, `)
    nextTerm = a + b;
    a = b;
    b = nextTerm;
}
