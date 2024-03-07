# How the 2opt algorithm works
Condier a path:
A - B - C - D - E - F - G - a
2 opt will look at two connections
For example
A - B and D - E
Call the connection A - B v1 and D - E v2
Call the connection A - D v3 and B - E v4
We will then compare v1 and v2 to connections v3 and v4 with the formula
- v1 - v2 + v3 + v4
If the result is negative, v3 and v4 are optimized links
Now, we will reverse the order of elements between B and E
giving: A - B - D - C - E