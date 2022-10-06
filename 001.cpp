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

float speed_dgn_loss(double data)
{
    /* tulis fungsi hitung_loss kalian disini */
    int loses;
    loses = (data > 1 && data < 10) ? 1 : loses;
    loses = (data > 10 && data < 20) ? 3 : loses;
    loses = (data > 21 && data < 30) ? 5 : loses;
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

double mencari_V0(double variabel1)
{
    //, int variabel2
    // v1 = memasukan persamaan ketika kecepatan
    // v2 = waktu berapa

    /* Tulis fungsi mencari v0 kalian disini */

    // jarak ketinggian
    // printf("%f\n", pow(speed_dgn_loss(variabel1), 2));
    // printf("%f\n", sin(2 * double(SUDUT)));

    return pow(speed_dgn_loss(variabel1), 2) * sin(2 * double(SUDUT)) / double(GRAVITASI);
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
    cout << "INPUT : ";
    cin >> input;
    // cout << speed_dgn_loss(input) << "\n";
    cout << "Jarak Adalah : " + to_string(mencari_V0(input)) << endl;

    return 0;
    /* cout << jarak << " " << kecepatan_tangensial << endl */
}