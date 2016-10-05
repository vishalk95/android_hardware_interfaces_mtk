/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FAILURE_REASON_UTIL_H_
#define FAILURE_REASON_UTIL_H_

#include <android/hardware/wifi/1.0/IWifi.h>
#include <hardware_legacy/wifi_hal.h>

namespace android {
namespace hardware {
namespace wifi {
namespace V1_0 {
namespace implementation {

std::string LegacyErrorToString(wifi_error error);

FailureReason CreateFailureReason(CommandFailureReason reason,
                                  const std::string& description);
FailureReason CreateFailureReasonLegacyError(wifi_error error,
                                             const std::string& description);

}  // namespace implementation
}  // namespace V1_0
}  // namespace wifi
}  // namespace hardware
}  // namespace android

#endif  // FAILURE_REASON_UTIL_H_
