#include <stdio.h>

typedef struct NODE {
	int nData; // data to be managed
	struct NODE* next;// Pointers for data management
} NODE;

int main()
{
	NODE list[5] = { 0 };
	
	// init value
	list[0].nData = 100;
	list[1].nData = 200;
	list[2].nData = 300;
	list[3].nData = 400;
	list[4].nData = 500;

	// Structure a linked list
	list[0].next = &list[1];
	list[1].next = &list[2];
	list[2].next = &list[3];
	list[3].next = &list[4];
	list[4].next = 0; // 0, NULL, nullptr

	for (int i = 0; i < 5; i++)
	{
		printf("list[%d]: %d\n", i, list[i].nData);
	}

	NODE* pTmp = &list[0];

	while (pTmp != NULL) 
	{
		printf("%p: %d\n", pTmp, pTmp->nData);
		pTmp = pTmp->next;
	}

	return 0;

}