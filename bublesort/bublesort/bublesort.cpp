// bublesort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void buble(int mas[], int a) {
    int tmp = 0;
    for (int i = 0; i < a; i++) {
        for (int j = (a - 1); j >= (i + 1); j--) {
            if (mas[j] < mas[j - 1]) {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
            }
        }
    }
}
void insertion(int mas[], int a)
{
    int key = 0;
    int i = 0;
    for (int j = 1; j < a; j++) {
        key = mas[j];
        i = j - 1;
        while (i >= 0 && mas[i] > key) {
            mas[i + 1] = mas[i];
            i = i - 1;
            mas[i + 1] = key;
        }
    }
}
void selection(int mas[], int a)
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < a; i++) {
        j = i;
        for (int k = i; k < a; k++) {
            if (mas[j] > mas[k]) {
                j = k;
            }
        }
        tmp = mas[i];
        mas[i] = mas[j];
        mas[j] = tmp;
    }
}
void quick(int* mas, int const f)
{
    int const fd = f;
    int pivot = 0;
    int ind = fd / 2;
    int i, j = 0, k = 0;
    if (fd > 1) {
        int* L = new int[fd];
        int* R = new int[fd];
        pivot = mas[ind];
        for (i = 0; i < fd; i++) {
            if (i != ind) {
                if (mas[i] < pivot) {
                    L[j] = mas[i];
                    j++;
                }
                else {
                    R[k] = mas[i];
                    k++;
                }
            }
        }
        quick(L, j);
        quick(R, k);
        for (int cnt = 0; cnt < fd; cnt++) {
            if (cnt < j) {
                mas[cnt] = L[cnt];;
            }
            else if (cnt == j) {
                mas[cnt] = pivot;
            }
            else {
                mas[cnt] = R[cnt - (j + 1)];
            }
        }
    }
}
void line(int mas[], int a) {
    for (int i = 0; mas[i] == a; i++) {
        if (i >= sizeof(mas) / sizeof(int)) {
            break;
        }
    }
}
int Search_Binary(int mas[], int left, int right, int a)
{
    int midd = 0;
    while (1)
    {
        midd = (left + right) / 2;

        if (a < mas[midd])       
            right = midd - 1;      
        else if (a > mas[midd])  
            left = midd + 1;    
        else                       
            return midd;           
        if (left > right)          
    }
}

int main()
{
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
