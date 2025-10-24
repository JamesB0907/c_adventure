# The Pointer Paradox

**Quest Objective:**  
Understand circular references and how to safely traverse and manage them.

**Lore:**  
The apprentice now confronts the paradox — a loop of memory that never ends. Circular references are powerful but dangerous, and must be handled with care to avoid infinite traversal and memory leaks.

**Concepts Unlocked:**
- Circular references (`r3->next = r1`)
- Infinite loop prevention (`steps < 10`)
- Manual loop breaking before `free`
- Awareness of memory traps and traversal limits

**Bonus Challenge:**  
Create a function that detects circular references in a chain. Use it to warn the apprentice before they enter the paradox.