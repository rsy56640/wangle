/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <folly/Range.h>

constexpr folly::StringPiece validTicketData =
    R"JSON({
    "new": [
      "0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff",
      "111122223333444455556666777788889999aaaabbbbccccddddeeeeffff0000"
    ],
    "current": [
      "0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff"
    ]
  })JSON";

// Has invalid strict json structure.
constexpr folly::StringPiece invalidTicketData =
    R"JSON({
    'new': [
      "0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff',
      "111122223333444455556666777788889999aaaabbbbccccddddeeeeffff0000"
    ],
    "current": [
      "0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff"
    ],
  })JSON";
