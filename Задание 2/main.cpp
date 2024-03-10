#include <iostream>

void makeTwoDimensionalArr(int arr[][4], int* arr1);
void foundMaxElOfRow(int arr[][4]);

int main()
{
    setlocale(0, "rus");

    // данный массив
    int arr1[100] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
                      -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
                      -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
                      30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
                      -97, -21, -95, 64, 22, -2,69, -84, -1, -71,
                      -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
                      88, -61, 0, -64, -83, 97,  0, 90, 15, 8,
                      -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
                      98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
                      78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };

    const int ROW = 25;
    const int COL = 4;
    int arr[ROW][COL];

    makeTwoDimensionalArr(arr, arr1);
    foundMaxElOfRow(arr);;

    return 0;
}


// инициализируем новый двумерный массив
void makeTwoDimensionalArr(int arr[][4], int* arr1)
{
    int count = 0;
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = arr1[count];
            count++;
        }
    }
}

// поиск max элементов каждой строки
void foundMaxElOfRow(int arr[][4])
{
    int* p = arr[0];
    int maxEl = arr[0][0];
    int numOfStr = 1;

    for (int i = 1; i < 101; i++, p++)
    {
        if (*p > maxEl)
            maxEl = *p;

        if (i % 4 == 0)
        {
            std::cout << "Ќаибольший элемент строки " << numOfStr << ": " << maxEl << std::endl;
            maxEl = -100000;
            numOfStr++;
        }
    }
}
