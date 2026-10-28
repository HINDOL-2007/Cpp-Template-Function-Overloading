# ⚙️ C++ Template Mechanics & Overloading

## 📖 About the Project
This project explores two advanced C++ template mechanics: out-of-class member function definitions and template function overloading. It proves how the C++ compiler resolves naming conflicts between generic templates and standard functions during runtime execution.

## ✨ Features
*   **Out-of-Class Template Definitions:** Utilizes the `Class<T>::` scope resolution operator to cleanly separate a template class's method declarations from its actual implementations.
*   **The Exact Match Rule (Overloading):** Demonstrates that when a standard function and a generic template function share the exact same name, the C++ compiler will always prioritize the standard function if the passed data type is an exact match.
*   **Type Deduction:** Seamlessly routes floating-point arguments to the generic fallback template while intercepting integer arguments with the explicit standard function.
