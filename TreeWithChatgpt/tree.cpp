#include <iostream>
#include <vector>
#include <string>

class TreeNode {
public:
	std::string name;
	bool isDirectory;
	std::vector<TreeNode*> children;

	TreeNode(std::string _name, bool _isDirectory = false)
		: name(_name), isDirectory(_isDirectory) {}
};

TreeNode* findItem(TreeNode* root, const std::string& target) {
	if (!root) {
		return nullptr;
	}

	if (root->name == target) {
		return root;
	}

	for (TreeNode* child : root->children) {
		TreeNode* result = findItem(child, target);
		if (result) {
			return result;
		}
	}

	return nullptr;
}

int main() {
	TreeNode* root = new TreeNode("root", true);
	TreeNode* documents = new TreeNode("Documents", true);
	TreeNode* file1 = new TreeNode("File1.txt");
	TreeNode* file2 = new TreeNode("File2.txt");
	TreeNode* pictures = new TreeNode("Pictures", true);
	TreeNode* image1 = new TreeNode("Image1.jpg");
	TreeNode* image2 = new TreeNode("Image2.jpg");
	TreeNode* music = new TreeNode("Music", true);
	TreeNode* song1 = new TreeNode("Song1.mp3");
	TreeNode* song2 = new TreeNode("Song2.mp3");

	root->children.push_back(documents);
	root->children.push_back(pictures);
	root->children.push_back(music);
	documents->children.push_back(file1);
	documents->children.push_back(file2);
	pictures->children.push_back(image1);
	pictures->children.push_back(image2);
	music->children.push_back(song1);
	music->children.push_back(song2);

	std::string targetItem;
	std::cout << "찾을 파일 이름을 입력하세요 : ";
	std::cin >> targetItem;

	TreeNode* result = findItem(root, targetItem);

	if (result) {
		if (result->isDirectory)
			std::cout << "Found directory: " << result->name << std::endl;
		else
			std::cout << "Found file: " << result->name << std::endl;
	}
	else
		std::cout << targetItem << " is not found." << std::endl;

	delete root;
	delete documents;
	delete file1;
	delete file2;
	delete pictures;
	delete image1;
	delete image2;
	delete music;
	delete song1;
	delete song2;

	return 0;
}