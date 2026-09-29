#pragma once

#include <cstdint>

namespace xauusd::sovereign {

enum class NotificationChannel : std::uint8_t {
    DESKTOP,
    AUDIT_LOG,
    NONE
};

} // namespace xauusd::sovereign
