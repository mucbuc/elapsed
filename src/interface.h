#ifndef INTERFACE_H_WPNBLAWPZRBQOF3004JTUN
#define INTERFACE_H_WPNBLAWPZRBQOF3004JTUN

#include <chrono>

namespace om636 {
struct Elapsed {
    Elapsed(const Elapsed&) = default;
    Elapsed& operator=(const Elapsed&) = default;

    Elapsed();
    double seconds();

private:
    typedef std::chrono::time_point<std::chrono::high_resolution_clock> time_type;

    time_type m_previous;
};
}

#endif // INTERFACE_H_WPNBLAWPZRBQOF3004JTUN
