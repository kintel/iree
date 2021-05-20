// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IREE_RUNTIME_API_H_
#define IREE_RUNTIME_API_H_

// Lower-level APIs:
#include "iree/base/api.h"  // IWYU pragma: export
#include "iree/hal/api.h"   // IWYU pragma: export
#include "iree/vm/api.h"    // IWYU pragma: export

// Runtime API:
#include "iree/runtime/call.h"      // IWYU pragma: export
#include "iree/runtime/instance.h"  // IWYU pragma: export
#include "iree/runtime/session.h"   // IWYU pragma: export

#endif  // IREE_RUNTIME_API_H_
