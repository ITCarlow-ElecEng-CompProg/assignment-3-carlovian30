/**Kevin Griffin
 * Lab Ex-3
 * Standdev calculator
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //variable declarations
    double values[10] = {0}, sum = 0, mean = 0, product = 0, standev;
    int n;

    n = 0;
    //while loop criteria
    while (n<10)
    {
        //while loop prompts and sum equation
        cout << "Enter values: ";
        cin >> values[n];
        sum = sum + values[n];
        n++;
    }

    //displays results for the sum calculation
    cout << "Sum is :" << sum << endl;
    //equation to calculate the mean
    mean = sum / 10.0;

    // displays mean results
    cout << "mean is : " << mean << endl;

    n = 0;

    // while loop criteria for the product
    while (n<10)
    {
        // equation to calculate the product
        product =  product + ((values[n]- mean) * (values[n] - mean)) /9.0;
        n++;
    }

    // displays the results of the prodcuct equation
    cout << "Product is: " << product << endl;

    //Equation to calculate the standard deviation
    standev = pow(product, 0.5);
    cout << "Standard Deviation" << standev << endl;

    return 0;
}
