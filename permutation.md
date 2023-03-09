# Tips of deriving recursive algorithm
1. First come up with a base case.
2. Then starts playing with some examples, draw them out and do pattern recognition
3. Drawing trees in recursive problem is a good way to visualize what is going on.
4. Making sure the input and outputs of the recursive problem is crucial
5. Code and implementation

# Permutation
0. Consider an array A with length n, start index as k and end index as m
1. Base case is when only 1 element to permute which is itself. That is k==m. return itself.
2. For every element, find the permutation other than the current element.
3. In order to permute through the element without destroying the order, swap the position with the first element, then restore by swapping by after reach permutation.