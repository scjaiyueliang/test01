/**
 * @file time.h
 * @author shangchangjun
 * @date 2023/08/10
 * @brief timer definitions.
 **/
//时间类
#ifndef ITC_TIMER_H
#define ITC_TIMER_H

#include <chrono>
typedef int 					SANY_3322;
namespace itc {

namespace utils {

class Timer {
public:
    Timer() : _start(std::chrono::steady_clock::now()) {}

    std::chrono::milliseconds stop() {
        auto cur = std::chrono::steady_clock::now();

        return std::chrono::duration_cast<std::chrono::milliseconds>(cur - _start);
    }

private:
    std::chrono::time_point<std::chrono::steady_clock> _start{};
};

}

}

#endif // end ITC_TIMER_H
