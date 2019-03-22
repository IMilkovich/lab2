#include <iostream>
#include <math.h>

int main() {
    double a, b, c;

    std::cout << "Enter a -";
    std::cin >> a;
    std::cout << "Enter b -";
    std::cin >> b;
    std::cout << "Enter c -";
    std::cin >> c;
    std::cout << std::endl;

    double d = pow(b, 2) - 4 * a * c;
    if (d < 0) {
        std::cout << "The equation has no real roots";
    } else if (d == 0) {
        double x = -b/2*a;
        std::cout << "x = " << x;
    } else if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        printf("x1 - %.2f \nx2 - %.2f", x1,x2);
    }

    return 0;
}
