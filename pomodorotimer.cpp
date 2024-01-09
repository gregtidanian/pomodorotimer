#include <iostream>
#include <thread>
#include <chrono>

void start_timer(int duration, const std::string& message) {
    std::cout << message << std::endl;
    while (duration > 0) {
        int mins = duration / 60;
        int secs = duration % 60;
        std::cout << "\rTime left: " << mins << ":" << (secs < 10 ? "0" : "") << secs << " " << std::flush;

        std::this_thread::sleep_for(std::chrono::seconds(1));
        --duration;
    }
    std::cout << "\n";
}

int main() {
    const int pomodoro_length = 25 * 60;  // 25 minutes
    const int short_break = 5 * 60;       // 5 minutes
    const int sessions = 4; // The numnber of work and rest cycles

    for (int session = 0; session < sessions; ++session) {
        start_timer(pomodoro_length, "Twenty-five minute Pomodoro session started.");
        start_timer(short_break, "Take a five minute break.");
    }

    std::cout << "Pomodoro sessions complete!" << std::endl;
    return 0;
}