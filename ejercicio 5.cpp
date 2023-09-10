#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};
    int t = 174;
    int maxSum = 0;
    vector<int> selectedCities;

    // Bucle para probar todas las combinaciones de tres ciudades
    for (int i = 0; i < distancias.size(); i++) {
        for (int j = i + 1; j < distancias.size(); j++) {
            for (int k = j + 1; k < distancias.size(); k++) {
                int sum = distancias[i] + distancias[j] + distancias[k];
                if (sum <= t && sum > maxSum) {
                    maxSum = sum;
                    selectedCities = {distancias[i], distancias[j], distancias[k]};
                }
            }
        }
    }
    cout << "Distancias seleccionadas: ";
    for (int distance : selectedCities) {
        cout << distance << " ";
    }
    cout << endl;

    cout << "Suma máxima de la distancia recorrida sera : " << maxSum << " millas" << endl;

    return 0;
}
