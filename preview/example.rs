// This is a simple Rust program that demonstrates basic syntax and features.

fn main() {
    // Variable declaration with type inference
    let greeting = "Hello, world!";

    // Function call to print the greeting
    println!("{}", greeting);

    // Calling a function that adds two numbers
    let result = add(5, 3);
    println!("5 + 3 = {}", result);
}

// Function to add two numbers
fn add(a: i32, b: i32) -> i32 {
    a + b
}
