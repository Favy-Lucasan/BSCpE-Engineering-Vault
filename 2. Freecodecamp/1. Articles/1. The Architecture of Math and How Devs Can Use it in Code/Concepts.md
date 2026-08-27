## The Core Metaphor: Briefly explain the "Tree of Mathematics" concept. How do the roots (logic/set theory) lead to the branches (applied engineering)?
- mathematics is like a tree. Its roots consists of the foundational mathematical concepts like: logic and set theory. From these roots emerge the branches of the main basic fields of math: algebra, geometry, arithmetic, and analysis. Basically, without the roots (logic and set theory), we cannot discover more complex forms of mathematics.

## Analytical vs. Numerical Approaches: This should be the meat of your document. Explain the difference in your own words. Why can't we solve everything analytically? Why do computers rely so heavily on numerical approximations for real-world phenomena? (Link your Python scripts here).
1. The difference of Analytical approach is that we are finding **exact** mathematical solutions using equations and formulas with the help of variables or symbols (commonly: x, y, and z). While, Numerical approach is the method of formulating mathematical solutions to find approximations of a solution to a problem, especially when variables get too many and more complex.
2. The reason we can't solve everything analytically is because (perhaps) we lack the formal mathematical solution to solve such problem that we can only use numerical approach to provide an approximate value that is close and believed to be true.
3. Because in reality we could not predict such occurances exactly as they should be. The world and its reality is variable, so we programmed computers to rely heavily in approximation so there should be a margin for error and for it to be more realistic.
P.S. The python scripts I wrote is just the exact code shown in the article. I just wrote it so that I can see if it runs in my currest VS Code IDE.

## Engineering as Applied Math: Pick 1 or 2 of the examples the author gave (e.g., Control Theory, Neural Networks, or PCA) and write down how different math disciplines combine to create that technology.


## The Gödel Limitation: Write a quick note on Gödel's Incompleteness Theorem and what it means for formal logical systems.




AI:
## The Core Metaphor: The Tree of Mathematics
Mathematics functions like a growing tree. Its roots consist of fundamental systems like logic and set theory. From these roots emerge the primary branches: algebra, geometry, arithmetic, and analysis. The core takeaway is that mathematics is a dependency tree; without the foundational roots of logic, the complex branches (which we use in computer engineering) cannot exist or be discovered.

## Analytical vs. Numerical Approaches
* **Analytical Approach:** Finding the **exact** mathematical solution by manipulating symbols and variables (e.g., x, y, z) through formal equations.
* **Numerical Approach:** Formulating mathematical algorithms to find a highly accurate **approximation** of a solution.
* **Why we need both:** We cannot solve everything analytically because many real-world systems are too complex and lack formal symbolic solutions. Furthermore, computers are discrete machines. Solving massive symbolic systems analytically requires immense computational power and time. Therefore, computers rely heavily on numerical approximations (like matrix operations) to process highly complex, multi-variable problems rapidly and efficiently.
* *Practical Note:* I tested the analytical (`SymPy`) and numerical (`SciPy`) Python scripts locally in VS Code to observe the difference in how these libraries handle the math natively.