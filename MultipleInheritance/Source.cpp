#include "MultipleInheritance.h"

int main()
{
    int arr[] = { 5, 3, 8, 6, 2, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    Array array(arr, size);

    array.Show("Original array");

    cout << "Maximum: " << array.Max() << endl;
    cout << "Minimum: " << array.Min() << endl;
    cout << "Average: " << array.Avg() << endl;
    cout << "Search for 8: " << (array.Search(8) ? "Found" : "Not found") << endl;

    array.SortAsc();
    array.Show("Sorted ascending");

    array.SortDesc();
    array.Show("Sorted descending");

    array.SortByParam(true);
    array.Show("Sorted by parameter (ascending)");

    array.SortByParam(false);
    array.Show("Sorted by parameter (descending)");

    return 0;
}
