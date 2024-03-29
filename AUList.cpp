#include "AUList.h"

AUList::AUList()
{
	length = 0;
	loc = -1;
}

AUList::~AUList()
{
}

void AUList::MakeEmpty()
{
	length = 0;
}

bool AUList::IsFull() const
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}

ItemType AUList::GetItem(ItemType item, bool& found)
{
	found = false;
	
	int index = findItem(item);

	if (index != -1)
	{
		found = true;
		//std::cout << "item is in list" << std::endl;
		return Items[index];
	}
	else
		//std::cout << "item is not in list" << std::endl;
		return item;
}

void AUList::PutItem(ItemType item)
{
	Items[length] = item;
	length++;
}

void AUList::DeleteItem(ItemType item)
{
	int index = findItem(item);
	if(index != -1)
	{
		while(index < length - 1)
		{
			Items[index] = Items[index + 1];
			index++;
		}
		length--;
	}
}

void AUList::ResetList()
{
	loc = -1;
}

ItemType AUList::GetNextItem()
{
	loc++;
	return Items[loc];
}


//helper function
int AUList::findItem(ItemType item)
{
	int i = 0;
	while (length > i)
	{
		if (Items[i].getValue() == item.getValue())
		{
			return i;
		}
		else
			i++;
	}
	return -1;
}
