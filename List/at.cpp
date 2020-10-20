#include "LinkedList.h"
#include <iostream>
int LinkedList::at(size_t pos)
{
	if (pos <= sizeList)
	{
		current = head;
		for (int position = 1; position < pos; position++) // go to the desired list position
		{
			current = current->next;
		}
		return current->data;
	}
	else return 000;
}