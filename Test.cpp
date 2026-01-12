#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of items your bought: ";
    cin >> n;
    int median_rs[n], rate[n], kg[n];
    float total_rs = 0.0f, gst, final_bill;
    string items[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of item " << i + 1 << ": ";
        cin >> items[i];
        cout << "Enter the amount of item bought(in kg): ";
        cin >> kg[i];
        cout << "Enter the rate of the item per kg: ";
        cin >> rate[i];
        median_rs[i] = kg[i] * rate[i];
        total_rs += median_rs[i];
    }
    cout << left
         << setw(15) << "Item Name"
         << setw(15) << "Quantity"
         << setw(15) << "Price of items" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(15) << items[i]
             << setw(15) << kg[i]
             << setw(15) << median_rs[i] << endl;
    }
    gst = 0.03f * total_rs;
    final_bill = total_rs + gst;
    cout << "Total bill to be paid: " << final_bill;
    cin.get();
    cin.get();
    return 0;
}