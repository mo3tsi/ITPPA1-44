# ITPPA1-44 — Programming in C++

C++ exercises and practice work from the ITPPA1-44 module.

## Repository contents

- `Project1/Project1.cpp` — introductory console program demonstrating standard input/output, variables, fundamental types, constants, arithmetic operations and user input.
- `Project1.slnx` and `Project1/Project1.vcxproj` — the Visual Studio solution and project files.

The current repository contains introductory practice code. The separately completed VukaFit assignment applications (membership quotation, group session booking, student check-in tracking, and attendance analysis) have **not yet been imported**.

## Run the existing project

1. Install Visual Studio with the **Desktop development with C++** workload.
2. Open `Project1.slnx`.
3. Select your preferred build configuration.
4. Build and run the project with **Ctrl+F5**.

Alternatively, compile the existing practice source with a C++ compiler:

```bash
g++ -std=c++17 Project1/Project1.cpp -o project1
./project1
```

On Windows PowerShell, run `.\\project1.exe`.

## Repository hygiene

Generated Visual Studio caches, local workspace state and build outputs should not be committed. The root `.gitignore` excludes them for future changes.

> Academic portfolio note: only publish original work that you are permitted to share. Remove student numbers, signatures, assessment coversheets, and other private information from public uploads.
