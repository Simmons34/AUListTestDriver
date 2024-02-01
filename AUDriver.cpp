#include <iostream>
#include "AUList.cpp"
#include "ItemType.cpp"

using namespace std;

int main() {

	//working AUList functions
	//.PutItem()
	//.IsFull()
	//.GetItem()
	//.DeleteItem()
		
	//working Itemtype functions
	//.setValue()
	//.getValue()
	//
	
	ItemType firstItem, secondItem, thirdItem, extraItem;
	AUList myList;
	bool itemInList;

	firstItem.setValue(1);
	secondItem.setValue(10);
	thirdItem.setValue(50);
	extraItem.setValue(9);
	
	cout << "List is full: " << myList.IsFull() << endl;
	myList.PutItem(firstItem);
	myList.PutItem(secondItem);
	myList.PutItem(thirdItem);
	
	myList.GetItem(firstItem, itemInList);
	cout << "if item is in list result = 1" << endl << "Result [" << itemInList << "]" << endl;
	
	myList.GetItem(extraItem, itemInList);
	cout << "if item is in list result = 1" << endl << "Result [" << itemInList << "]" << endl;
	
	myList.GetItem(thirdItem, itemInList);
	cout << "if item is in list result = 1" << endl << "Result [" << itemInList << "]" << endl;

	myList.DeleteItem(extraItem);
	
	//what is reset list supposed to do?
	//myList.ResetList();
	
	myList.DeleteItem(firstItem);
	
	myList.GetItem(firstItem, itemInList);
	cout << "if item is in list result = 1" << endl << "Result [" << itemInList << "]" << endl;
	
	//myList.DeleteItem(firstItem);
	//myList.GetItem(firstItem, itemInList);
	//cout << "if item is in list result = 1" << endl << "Result [" << itemInList << "]" << endl;


	//cout << firstItem.getValue() << endl;
	//cout << myList.GetItem(firstItem, itemInList) << endl;

	cout << secondItem.getValue() << endl;
	//cout << myList.GetItem(firstItem, found) << endl;	
	//myList.PutItem(0)
	
	//cout << "List is full: " << myList.IsFull() << endl;
	
	return 0;
}
