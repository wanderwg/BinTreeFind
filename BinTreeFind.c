#include "BinTree.h"
#include <malloc.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "Queue.h"


BTNode* BinaryTreeFind(BTNode* pRoot, BTDataType x) {
	if (pRoot == NULL)
		return NULL;
	if (pRoot->_data == x)
		return pRoot;
	BTNode* pTemp = NULL;
	if (pTemp = BinaryTreeFind(pRoot->_pLeft, x))
		return pTemp;
	return BinaryTreeFind(pRoot->_pRight, x);
}
