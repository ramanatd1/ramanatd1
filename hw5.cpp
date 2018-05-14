#include <iostream>

using namespace std;

struct TreeNode {
	int Value;
	TreeNode *Left;
	TreeNode *Right;

	TreeNode(int Val) {
		this->Value = Val;
	}

	TreeNode(int Val, TreeNode *Left, TreeNode *Right) {
		this->Value = Val;
		this->Left = Left;
		this->Right = Right;
	}
};

void DFS_PreOrder_traversal_recursive(const TreeNode *Entry) {
  if (Entry == nullptr) return;

  cout << Entry->Value << " ";

  DFS_PreOrder_traversal_recursive(Entry->Left);
  DFS_PreOrder_traversal_recursive(Entry->Right);
}

TreeNode *DataStructureTree() {
	TreeNode *Root = new TreeNode(2);

	Root->Right = new TreeNode(5, nullptr, new TreeNode(9,  new TreeNode(4), nullptr));
	Root->Left = new TreeNode(7, new TreeNode(2), new TreeNode(6, new TreeNode(5), new TreeNode(11)));

	return Root;
}

int main() {
  TreeNode *Root = DataStructureTree();

  DFS_PreOrder_traversal_recursive(Root);
  cout << endl;
}