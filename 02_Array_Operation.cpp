#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"URN:2514169"<<endl;
	cout << "Enter the number of element of array:" << endl;
	cin >> n;

	int arr1[100];

	cout << "Enter the element of array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	int choice;
	cout << "1.Display the Array" << endl;
	cout << "2.Insert element at given position" << endl;
	cout << "3.Deleting element at given position" << endl;
	cout << "4.Exit" << endl;
	cout << "Enter your choice" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "ARRAY {";
		for (int i = 0; i < n; i++)
		{
			cout << arr1[i] << ",";
		}
		cout << "}" << endl;
		break;

	case 2:
	{
		int elem, pos;

		cout << "Enter element to insert:" << endl;
		cin >> elem;

		cout << "Enter at position to want to insert:" << endl;
		cin >> pos;

		if (pos < 1 || pos > n + 1)
		{
			cout << "Invalid position!" << endl;
		}
		else if (n >= 100)
		{
			cout << "Array is full!" << endl;
		}
		else
		{
			for (int i = n; i >= pos; i--)
			{
				arr1[i] = arr1[i - 1];
			}

			arr1[pos - 1] = elem;
			n++;

			cout << "New array after insertion {";
			for (int i = 0; i < n; i++)
			{
				cout << arr1[i] << ",";
			}
			cout << "}" << endl;
		}
		break;
	}

	case 3:
	{
		int pos1;

		cout << "Enter position of element to delete:" << endl;
		cin >> pos1;

		if (pos1 < 1 || pos1 > n)
		{
			cout << "Invalid position!" << endl;
		}
		else
		{
			for (int i = pos1; i < n; i++)
			{
				arr1[i - 1] = arr1[i];
			}

			n--;

			cout << "New array after deletion {";
			for (int i = 0; i < n; i++)
			{
				cout << arr1[i] << ",";
			}
			cout << "}" << endl;
		}
		break;
	}

	case 4:
		cout << "Exiting the program." << endl;
		break;

	default:
		cout << "Invalid choice!" << endl;
	}

	return 0;
}