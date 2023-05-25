// algocpp_homework_01_02.cpp 

#include <iostream>
#include <windows.h>

int number_elements_greater_then(int*arr,int sz,int st_pt) 
{
    int start=0, end=sz-1, mid=0, flag=0;
    if (arr[start] > st_pt) return sz;
    
    while ((start <= end) && (flag==0)) 
    {
        mid = (start + end) / 2;
        if ((arr[mid] <= st_pt)&&(arr[mid+1]>st_pt)) flag = 1;

        if (arr[mid] > st_pt) end = mid - 1;
        else start = mid + 1;
    }
    return (sz-1-mid);
}

int main()
{
    system("chcp 1251");
    system("cls");
    int size = 9;
    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int starting_point;
    std::cout << "Введите точку отсчёта: ";
    std::cin >> starting_point;
    int abc = number_elements_greater_then(arr,size,starting_point);
    std::cout << "Количество элементов в массиве больших, чем " << starting_point << ": " << abc << std::endl;
}
