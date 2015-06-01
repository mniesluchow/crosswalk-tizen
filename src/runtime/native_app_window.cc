/*
 * Copyright (c) 2015 Samsung Electronics Co., Ltd All Rights Reserved
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "runtime/native_app_window.h"

#include <Elementary.h>

namespace wrt {

NativeAppWindow::NativeAppWindow() {
}

NativeAppWindow::~NativeAppWindow() {
}

Evas_Object* NativeAppWindow::CreateWindowInternal() {
  elm_config_accel_preference_set("opengl");
  return elm_win_add(NULL, "wrt-widget", ELM_WIN_BASIC);
}


}  // namespace wrt