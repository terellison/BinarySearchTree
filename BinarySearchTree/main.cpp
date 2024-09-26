#include "BST.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


int main()
{
	BST<int>* searchTree = new BST<int>();

	searchTree->Push(50);
	searchTree->Push(25);
	searchTree->Push(75);
	searchTree->Push(10);
	searchTree->Push(35);
	searchTree->Push(65);
	searchTree->Push(100);
	searchTree->Push(15);
	searchTree->Push(40);
	searchTree->Push(60);
	searchTree->Push(80);

	int searchValue = 15;

	std::cout << "Contains " << searchValue << ": " << (searchTree->Contains(15) ? "true" : "false") << std::endl;

	std::cout << searchTree->InOrder() << std::endl;

	std::cout << "Removed 65 successfully? " << (searchTree->Remove(65) ? "true" : "false") << std::endl;

	std::cout << searchTree->InOrder() << std::endl;

	delete searchTree;

	_CrtDumpMemoryLeaks();

	return 0;
}