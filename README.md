# 0x1D. C - Binary trees

## Resources
**Read or watch:**

* [Binary tree (note the first line: Not to be confused with B-tree.)](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

### General
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## More Info
### Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

**Basic Binary Tree**
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

**Binary Search Tree**
```
typedef struct binary_tree_s bst_t;
```

**AVL Tree**
```
typedef struct binary_tree_s avl_t;
```

**Max Binary Heap**
```
typedef struct binary_tree_s heap_t;
```
_Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule._

**Print function**
<br>
To match the examples in the tasks, you are given [this](https://github.com/holbertonschool/0x1C.c) function

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

## Tasks
### Task 0. New node
<Details>
Write a function that creates a binary tree node

* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int * value)`;
* Where parent` is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or NULL on failure
</Details>

### Task 1. Insert left
<Details>
Write a function that inserts a node as the left-child of another node

* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)`;
* Where parent is a pointer to the node to insert the left-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
</Details>

### Task 2. Isert right
<Details>
Write a function that inserts a node as the right-child of another node

* `Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)`;
* Where parent is a pointer to the node to insert the right-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
</Details>

### Task 3. Delete
<Details>
Write a function that deletes an entire binary tree

* `Prototype: void binary_tree_delete(binary_tree_t *tree)`;
* Where tree is a pointer to the root node of the tree to delete
* If tree is NULL, do nothing
</Details>

### Task 4
<Details>
Write a function that checks if a node is a leaf

* Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
* Where node is a pointer to the node to check
* Your function must return 1 if node is a leaf, otherwise 0
* If node is NULL, return 0
</Details>

### Task 5. Is root
<Details>
Write a function that checks if a given node is a root

* `Prototype: int binary_tree_is_root(const binary_tree_t *node)`;
* Where node is a pointer to the node to check
* Your function must return 1 if node is a root, otherwise 0
* If node is NULL, return 0
</Details>

### Task 6. Pre-order trasversal
<Details>
Write a function that goes through a binary tree using pre-order traversal

* `Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))`;
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is NULL, do nothing
</Details>

### Task 7. Pre-order traversal
 <Details>
 Write a function that goes through a binary tree using pre-order traversal

* `Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))`;
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is NULL, do nothing
 </Details>

 ### Task 8. Post-order trasversal
 <Details>
 Write a function that goes through a binary tree using post-order traversal

* `Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))`;
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
* If tree or func is NULL, do nothing
 </Details>

 ### Task 9. Height
 <Details>
 Write a function that measures the height of a binary tree

* `Prototype: size_t binary_tree_height(const binary_tree_t *tree)`;
* Where tree is a pointer to the root node of the tree to measure the height.
* If tree is NULL, your function must return 0
 </Details>
 