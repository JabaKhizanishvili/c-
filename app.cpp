//4.1დავალება
//შექმენით წრის ფართობის და პერიმეტრის დათვლის ფუნქციები

// #include <iostream>
// #include <cmath>
// using namespace std;
// int fartobi(int r)
// {
//     int fartobi, perimetri;
//     fartobi = 3.14 * (r * r);
//     perimetri = sqrt(4 * 3.14 * fartobi);
//     cout << "wrewiris fartobi: " << fartobi << " wrewiris perimetri : " << perimetri;
//     return 0;
// }
// int main()
// {
//     int r;
//     cout << "Sheiyvane radiusi : ";
//     cin >> r;
//     fartobi(r);
//     return 0;
// }

//4.2დავალება
//შექმენით ABS ფუნქცია, რომელიც ნებისმიერი რიცხვის აბსოლუტურ მნიშნველობას დააბრუნებს

// #include <iostream>
// using namespace std;
// int abs(int num)
// {
//     if (num < 0)
//         num *= -1;

//     return num;
// }
// int main()
// {
//     int num, counter = 0;
//     while (counter >= 0)
//     {
//         counter++;
//         cout << "abs funqcia ! Sheiyvane ricxvi ! : ";
//         cin >> num;
//         cout << abs(num) << endl;
//     }
//     return 0;
// }

//4.3დავალება
//დაწერეთ pow ფუნქცია, რომელიც რიცხვს აიყვანს მითითებულ ხარისხში
//უარყოფით ხარისხში აიყვანს?
//ნულიდან 1-მდე ხარისხში?

// #include <iostream>
// using namespace std;
// float pow(float num, float xarisxi)
// {
//     float sum = 1;
//     if (xarisxi > 0)
//     {
//         for (float i = 1; i <= xarisxi; i++)
//         {
//             sum *= num;
//         }
//     }
//     else
//     {
//         for (float i = 0; i < (xarisxi * -1); i++)
//         {
//             sum *= 1 / num;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     int a, b, counter = 0;
//     while (counter >= 0)
//     {
//         cout << "Pow funqcia ! : Sheiyvane ricxvi! : ";
//         cin >> a;
//         cout << "xarisxi :";
//         cin >> b;
//         cout << a << "^^" << b << " = " << pow(a, b) << endl;
//     }
//     return 0;
// }

//4.4დავალება
//დაწერეთ sqrt ფუნქცია, რომელიც რიცხვის კვადრატულ ფექსვს იპოვის

// #include <iostream>
// #include <cmath>
// using namespace std;
// float sqrt(int a)
// {
//     float c = pow(a, 0.5);
//     return c;
// }
// int main()
// {
//     int a;
//     cout << "sqrt funqcia sheiyvane ricxvi : ";
//     cin >> a;
//     cout << sqrt(a);
//     return 0;
// }

//4.5დავალება
//შექმენით ფიბონაჩის ფუნქცია, რომელიც  მომხმარებლის მიერ მითითებული რიცხვის მიხედვით პოულობს ფიბონაჩის მიმდევრობის წევრს
//აქვე შექმენით მეორე ფუნქცია - ფიბონაჩის რეკურსიული ფუნქცია

// #include <iostream>
// using namespace std;
// int fib(int e)
// {
//     int a = 0, b = 1, c, counter = 0;
//     for (int i = 0; i < e; i++)
//     {
//         counter++;
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     cout << counter << " : " << a << endl;
//     return 0;
// }
// int main()
// {
//     int a;
//     cout << "Sheiyvane fibonachis mimdevrobis meramdene elementi gainteresebs :";
//     cin >> a;
//     fib(a);
//     return 0;
// }
