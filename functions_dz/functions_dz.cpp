
#include <iostream>
using namespace std;

void DrawRectangular(int height, int width, char sign) {
    for (int i = 0;i < height;i++) {
        for (int j = 0; j < width;j++) {
            cout << sign;
        }
        cout << endl;
    }
}

int Factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}


bool SimpleNumCheck(int number) {
    if (number < 2) {
        return false;
    }
    
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}








int Min(int arr[], const int size) {
    int min = arr[1];
    for (int i = 0;i < size;i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    } return min;
}
int Max(int arr[], const int size) {
    int max = arr[1];
    for (int i = 0;i < size;i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    } return max;
}
void Fill_arr(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 40 - 20;
    }
}

int Cube_num(int num) {
    int cube_num = pow(num, 3);
    return cube_num;
}



bool IsPositive(int num) {
    bool is_pos;

    if (num > 0)
        is_pos = 1;
    else if (num < 0)
        is_pos = 0;
    else
        cout << "Zero! ";

    return is_pos;
}



bool IsLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    else
        return false;
}
int DaysInMonth(int month, int year) {
    if (month == 2) {
        if (IsLeapYear(year)) {
            return 29;
        }
        return 28;
    }

    if (month == 4 || month == 6 ||
        month == 9 || month == 11) {
        return 30;
    }

    return 31;
}

int DateToDays(int day, int month, int year) {
    int whole_days = day;

    for (int y = 1; y < year; y++) {
        whole_days += IsLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        whole_days += DaysInMonth(m, year);
    }

    return whole_days;
}



int DataDifference(int day1, int month1, int year1, int day2, int month2, int year2)
{
    int differ = DateToDays(day2, month2, year2) - DateToDays(day1, month1, year1);
    return differ;
}

void FillArr(int arr[], int size);
int Average(int arr[], int size);
int CountPlusMinusZeroElements(int arr[], int size);

int main()
{
    // task 1
    //int h, w; char sign;
    //cout << "---=== Draw Rectangular ===---" << endl;
    //cout << "Enter height: "; cin >> h; cout << endl;
    //cout << "Enter width: "; cin >> w; cout << endl;
    //cout << "Enter symbol: "; cin >> sign; cout << endl;

    //DrawRectangular(h, w, sign);



    // task 2

    //int num, res;
    //cout << "---=== Fuctorial founder ===---" << endl;
    //cout << "Enter number: "; cin >> num; cout << endl;

    //res = Factorial(num);
    //cout << res << endl;




    // task 3

    //int number;
    //cout << "---=== Simple number checker ===---" << endl;
    //cout << "Enter number: "; cin >> number;

    //if (SimpleNumCheck(num) == 1)
    //    cout << "True" << endl;
    //else
    //    cout << "False" << endl;


    // task 4
    


    //srand(time(0));


    //
    //cout << "---=== Finder max and min ===---" << endl;

    //const int size_numbers = 5;
    //int numbers[size_numbers]{};

    //Fill_arr(numbers, size_numbers);
    //int min_num = Min(numbers, size_numbers);
    //int max_num = Max(numbers, size_numbers);
    //cout << "Min number: " << min_num << endl << "Max number: " << max_num << endl;









    // task 5
    //int num;
    //cout << "Enter number: "; cin >> num; cout << endl;
    //cout << "Number^3: " << Cube_num(num) << endl;



    // task 6

    //int num;
    //cout << "Enter number: "; cin >> num; cout << endl;
    //cout << "Is number positive: " << IsPositive(num) << endl;


    // task 7 

    //int day1, month1, year1, day2, month2, year2;
    //cout << "Enter first date: " << endl;
    //cout << "Days: "; cin >> day1; 
    //cout << "Month: "; cin >> month1; 
    //cout << "Year:";cin >> year1; 

    //cout << "Enter second date: " << endl;
    //cout << "Days: "; cin >> day2; 
    //cout << "Month: "; cin >> month2; 
    //cout << "Year:";cin >> year2; 

    //int dif = DataDifference(day1, month1, year1, day2, month2, year2);
    //cout << "Difference between date: " << dif << endl;





    // task 8
    //const int size = 10;
    //int arr[size]{};
    //srand(time(0));
    //FillArr(arr,size);
    //int avg = Average(arr, size);
    //cout << "Average of rand numbers: " << avg << endl;


    //task 9
    srand(time(0));

    const int size = 10;
    int arr[size]{};
    FillArr(arr, size);

    CountPlusMinusZeroElements(arr, size);


}


int CountPlusMinusZeroElements(int arr[], int size) {
    int count_plus = 0;
    int count_minus = 0;
    int count_zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            count_plus += 1;
        if (arr[i] < 0)
            count_minus += 1;
        if(arr[i] == 0)
            count_zero += 1;
    }
    cout << "Count plus num: " << count_plus << "\nCount minus num: " << count_minus << "\nCount zero num: " << count_zero;
    return 0;
}

void FillArr(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20 - 10;
        cout << arr[i] << endl;
    }
}


int Average(int arr[], int size) {
    int average = 0;
    for (int i = 0; i < size; i++) {
        average += arr[i];

    }
    return average = average / size;

}