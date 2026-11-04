console.log("Hello World");


//Constant Object with variable
console.log("Constant Object with variable:");
const student = {
    age: 24,
    name: "rahul hasan",
    cgpa: 8.3,
    isPass: true,
};

student["name"] = "Monkey"; //change variable
student["age"] = 300; //change variable
console.log(student);



//Arithmetic Operators
console.log("Arithmetic Operators:");
let a = 5;
let b = 2;

console.log("a + b = ", a + b);
console.log("a - b = ", a - b);
console.log("a * b = ", a * b);
console.log("a / b = ", a / b);
console.log("a % b = ", a % b);
console.log("a ** b = ", a ** b);
a++;
b--;
console.log("a = ", a);
console.log("b = ", b);
console.log("++a =", ++a); //Pre-increment
console.log("a++ =", a++); //Post-increment
console.log("--b =", --b); //Pre-decrement
console.log("b-- =", b--); //Post-decrement



//Conditional Statements
console.log("Condition:");
let mode = "dark";
let color;

if (mode === "dark") {
    color = "black";
}

if (mode === "light") {
    color = "white";
}

console.log(color);
