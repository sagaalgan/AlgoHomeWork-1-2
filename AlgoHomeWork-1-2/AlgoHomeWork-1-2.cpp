#include <iostream>

int calc(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int middle, count = 0;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] > x)
        {
            count += right - middle + 1;
            right = middle - 1;
        }
        else (arr[middle] < x);
        {
            left = middle + 1;
        }
        
    }
    return count;
}
int main()
{
    setlocale (LC_ALL, "Russian");
    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    std::cout << "Введите точку отсчета: ";
    std::cin >> x;
    int count = calc(arr, n, x);
    std::cout << "Количество элементов, больших " << x << ": " << count << std::endl;
    return 0;
}