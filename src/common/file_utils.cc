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

#include "common/file_utils.h"

#include <unistd.h>
#include <libgen.h>
#include <string>

namespace wrt {
namespace utils {

bool Exists(const std::string& path) {
  return (access(path.c_str(), F_OK) != -1);
}

std::string BaseName(const std::string& path) {
  char* p = basename(const_cast<char*>(path.c_str()));
  return std::string(p);
}

std::string DirName(const std::string& path) {
  char* p = dirname(const_cast<char*>(path.c_str()));
  return std::string(p);
}

std::string SchemeName(const std::string& uri) {
  size_t pos = uri.find(":");
  if (pos != std::string::npos && pos < uri.length()) {
    return std::string(uri.substr(0, pos));
  } else {
    return std::string();
  }
}

}  // namespace utils
}  // namespace wrt