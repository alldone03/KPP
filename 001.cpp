// NAMA		: Aldan Prayogi
// NRP		: 2040221034
// Jurusan	: Teknik Elektro Otomasi
/*
-------------------Note--------------------
    Please Start With Commandline Windows
-------------------------------------------
*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

#define GRAVITASI 10       // 10 m/s^2
#define START_PENGUKURAN 1 // pengukuran dimulai dari 1 meter
#define SUDUT 45           // sudut elevasi tembakan

int data_jarak[3][3] = {{1, 10, 1}, {10, 20, 3}, {21, 30, 5}};

float speed_dgn_loss(double data)
{
    /* tulis fungsi hitung_loss kalian disini */
    int kegagalan;
    for (int i = 0; i < int(sizeof(data_jarak)); i++)
    {
        kegagalan = (data >= data_jarak[i][0] && data <= data_jarak[i][1]) ? data_jarak[i][2] : kegagalan;
    }
    return data - kegagalan;
}

int mencari_V0(double variabel1)
{
    return pow(speed_dgn_loss(variabel1), 2) * sin(2 * double(SUDUT)) / double(GRAVITASI) - 75;
}
float mencari_tangesial(double variable)
{
    return SUDUT * float(variable * 0.00746007407);
}

int main()
{
    /* tulis kode utama kalian disini */
    double input;
    cout << "Insert Input: ";
    cin >> input;
    cout << to_string(mencari_V0(input)) << " ";
    cout << setprecision(6) << mencari_tangesial(input) << endl;
    /* cout << jarak << " " << kecepatan_tangensial << endl */
    return 0;
}