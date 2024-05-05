#include <iostream>

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap(arr[j], arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Function to display the array
void displayArray(const int arr[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], n, choice;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Choose the sorting algorithm:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Selection Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        bubbleSort(arr, n);
        break;
    case 2:
        insertionSort(arr, n);
        break;
    case 3:
        selectionSort(arr, n);
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }

    displayArray(arr, n);

    return 0;
}
