#include "MultipleInheritance.h"

Array::Array(int* arr, int length)
{
    size = length;
    data = new int[size];
    memcpy(data, arr, size * sizeof(int));
}

Array::~Array()
{
    delete[] data;
}

void Array::Show() const
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

void Array::Show(const string& info) const
{
    cout << info << ": ";
    Show();
}

int Array::Max() const
{
    int max = data[0];
    for (int i = 1; i < size; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    return max;
}

int Array::Min() const
{
    int min = data[0];
    for (int i = 1; i < size; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
    }
    return min;
}

float Array::Avg() const
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return static_cast<float>(sum) / size;
}

bool Array::Search(int valueToSearch) const
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == valueToSearch)
        {
            return true;
        }
    }
    return false;
}

void Array::SortAsc()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp1 = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp1;

            }
        }
    }
}

void Array::SortDesc()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (data[j] < data[j + 1])
            {
                int temp2 = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp2;
            }
        }
    }
}

void Array::SortByParam(bool isAsc)
{
    if (isAsc)
    {
        SortAsc();
    }
    else
    {
        SortDesc();
    }
}
