// Object literal method
const student1 = {
    name: "John",
    age: 20,
    course: "Computer Science",
    details: function() {
        return `${this.name} is ${this.age} years old and studies ${this.course}.`;
    }
};

console.log(student1.details());

// Using the Object() constructor
const student2 = new Object();
student2.name = "Jane";
student2.age = 22;
student2.course = "Mathematics";
student2.details = function() {
    return `${this.name} is ${this.age} years old and studies ${this.course}.`;
};

console.log(student2.details());

// Constructor function method
function Student(name, age, course) {
    this.name = name;
    this.age = age;
    this.course = course;
    this.details = function() {
        return `${this.name} is ${this.age} years old and studies ${this.course}.`;
    };
}

const student3 = new Student("Mike", 19, "Physics");
console.log(student3.details());

