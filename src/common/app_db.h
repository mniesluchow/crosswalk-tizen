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

#ifndef WRT_RUNTIME_APPDB_H_
#define WRT_RUNTIME_APPDB_H_

#include <string>
#include <list>

namespace wrt {
class AppDB {
 public:
  static AppDB* GetInstance();
  virtual bool HasKey(const std::string& section,
                      const std::string& key) const = 0;
  virtual std::string Get(const std::string& section,
                          const std::string& key) const = 0;
  virtual void Set(const std::string& section,
                   const std::string& key,
                   const std::string& value) = 0;
  virtual void GetKeys(const std::string& section,
                       std::list<std::string>* keys) const = 0;
  virtual void Remove(const std::string& section,
                      const std::string& key) = 0;
};
}  // namespace wrt
#endif  // WRT_RUNTIME_APPDB_H_