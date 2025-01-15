#include <iostream>
#include <string>
using namespace std;
class Time {
    private:
        int hour ;
        int minute;
        int second;
    public:
        Time(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        int getHour() {
            return hour;
        }
        int getMinute() {
            return minute;
        }
        int getSecond() {
            return second;
        }
        
        void setMinute(int minute) {
            this->minute = minute;
        }
        void setSecond(int second) {
            this->second = second;
        }
        void setTime(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        string toString() {
            return (hour < 10 ? "0" : "") + to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute) + ":" + (second < 10 ? "0" : "") + to_string(second);
        }
        void nextSecond() {
            second++;
            if (second == 60) {
                second = 0;
                minute++;
                if (minute == 60) {
                    minute = 0;
                    hour++;
                    if (hour == 24) {
                        hour = 0;
                    }
                }
            }
        }
        void previousSecond() {
            second--;
            if (second == -1) {
                second = 59;
                minute--;
                if (minute == -1) {
                    minute = 59;
                    hour--;
                    if (hour == -1) {
                        hour = 23;
                    }
                }
            }
        }
};
        
int main() {
    Time a(1,2,59);
    a.nextSecond();
    cout <<a.toString();
}