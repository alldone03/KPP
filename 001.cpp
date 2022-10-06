// NAMA		: Aldan Prayogi
// NRP		: 2040221034
// Jurusan	: Teknik Elektro Otomasi
#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std;

#define GRAVITASI 10       // 10 m/s^2
#define START_PENGUKURAN 1 // pengukuran dimulai dari 1 meter
#define SUDUT 45           // sudut elevasi tembakan

int data_jarak[3][3] = {{1, 10, 1}, {10, 20, 3}, {21, 30, 5}};

float speed_dgn_loss(double data)
{
    /* tulis fungsi hitung_loss kalian disini */
    // printf("%i", data_jarak[1][2]);
    int loses;
    for (int i = 0; i < sizeof(data_jarak); i++)
    {
        loses = (data >= data_jarak[i][0] && data <= data_jarak[i][1]) ? data_jarak[i][2] : loses;
    }
    // printf("%f\n", data - loses);
    // printf("%d\n", data - loses);
    // if (data > 1 - 1 && data < 10)
    // {
    //     return 1;
    // }
    // else if (data > 11 - 1 && data < 20)
    // {
    //     return 3;
    // }
    // else if (data > 21 - 1 && data < 30)
    // {
    //     return 5;
    // }
    // else
    // {
    //     /* code */
    // }

    // else if (variabel1 > 30)
    // {
    //     return 0;
    // }
    return data - loses;
}

int mencari_V0(double variabel1)
{
    //, int variabel2
    // v1 = memasukan persamaan ketika kecepatan
    // v2 = waktu berapa

    /* Tulis fungsi mencari v0 kalian disini */

    // jarak ketinggian
    // printf("%f\n", pow(speed_dgn_loss(variabel1), 2));
    // printf("%f\n", sin(2 * double(SUDUT)));

    return pow(speed_dgn_loss(variabel1), 2) * sin(2 * double(SUDUT)) / double(GRAVITASI) - 75;
}
float mencari_tangesial(double variable)
{
    return SUDUT * float(variable * 0.00746007407);
}

int main()
{
    /* tulis kode utama kalian disini */
    // float a = 3;
    // cout << numeric_limits<double>::max();
    // cout << sizeof(a);

    // double input = 10.0711;
    double input;
    // if (input > 10)
    // {
    //     printf("oke");
    // }
    // printf("%f\n", speed_dgn_loss(input));
    // cout << "INPUT : ";
    cin >> input;
    // cout << speed_dgn_loss(input) << "\n";
    // cout << "Jarak Adalah : " + to_string(mencari_V0(input)) << endl;

    cout << to_string(mencari_V0(input)) << " " << to_string(mencari_tangesial(input)) << endl;
    /* cout << jarak << " " << kecepatan_tangensial << endl */
    return 0;
}