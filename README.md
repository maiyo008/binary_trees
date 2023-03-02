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