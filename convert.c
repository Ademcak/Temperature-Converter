#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin * 9/5) - 459.67;
}

int main() {
    float temperature;
    char unit;
    
    printf("Sıcaklık değerini ve birimini girin (Örn: 25C, 75F, 298K): ");
    scanf("%f%c", &temperature, &unit);
    
    switch(unit) {
        case 'C':
        case 'c':
            printf("%.2f°C:\n", temperature);
            printf("%.2f°F\n", celsiusToFahrenheit(temperature));
            printf("%.2fK\n", celsiusToKelvin(temperature));
            break;
        case 'F':
        case 'f':
            printf("%.2f°F:\n", temperature);
            printf("%.2f°C\n", fahrenheitToCelsius(temperature));
            printf("%.2fK\n", fahrenheitToKelvin(temperature));
            break;
        case 'K':
        case 'k':
            printf("%.2fK:\n", temperature);
            printf("%.2f°C\n", kelvinToCelsius(temperature));
            printf("%.2f°F\n", kelvinToFahrenheit(temperature));
            break;
        default:
            printf("Geçersiz birim. Lütfen C, F veya K kullanın.\n");
            break;
    }
    
    return 0;
}
