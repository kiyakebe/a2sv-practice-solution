class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double f, k;
        vector<double> temprature;
        f = celsius * 1.80 + 32.00;
        k = celsius + 273.15;
        temprature.push_back(k);
        temprature.push_back(f);
        return temprature;
    }
};