// NAMA		: Aldan Prayogi
// NRP		: 2040221034
// Jurusan	: Teknik Elektro Otomasi

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#define GRAVITASI 10       // 10 m/s^2
#define START_PENGUKURAN 1 // pengukuran dimulai dari 1 meter
#define SUDUT 45           // sudut elevasi tembakan

int mencari_V0(int variabel1, int variabel2)
{
    /* Tulis fungsi mencari v0 kalian disini */
    int v0;
    X = (Vo2 * asin() 2 * (variabel1)) / GRAVITASI;

    return 0;
}

int speed_dgn_loss(int variabel1)
{
    /* tulis fungsi hitung_loss kalian disini */
    int data;
    int loses;
    if (variabel1 >= 1 && variabel1 <= 10)
    {
        loses = 1;
    }
    else if (variabel1 >= 11 && variabel1 <= 20)
    {
        loses = 3;
    }
    else if (variabel1 >= 21 && variabel1 <= 30)
    {
        loses = 5;
    }
    else if (variabel1 > 30)
    {
        return 0;
    }

    // float v0 = (2 * variabel1 / variabel2) ^ 0, 5;60

    return loses;
}

int main()
{
    /* tulis kode utama kalian disini */
    int sudut_tembakan;
    cout << "Sudut Tembakan" << endl;
    cin >> sudut_tembakan;
    string datahello = "Sudut Tembakan Adalah " + to_string(sudut_tembakan);
    cout << datahello << endl;
    return 0;

    /* cout << jarak << " " << kecepatan_tangensial << endl */
}