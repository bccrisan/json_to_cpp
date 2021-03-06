// The MIT License (MIT)
//
// Copyright (c) 2019 Darrell Wright
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files( the "Software" ), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and / or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <cstddef>
#include <string>

#include <daw/daw_string_view.h>
#include <daw/json/daw_json_value_t.h>

#include "ti_base.h"

namespace daw::json_to_cpp::types {
	struct ti_integral {
		bool is_optional = false;

		constexpr ti_integral( ) noexcept = default;

		static constexpr bool is_null = false;
		static constexpr size_t type = impl::ti_integral_pos;

		static inline std::string name( ) noexcept {
			return "int64_t";
		}

		static inline std::string array_member_info( ) noexcept {
			return "json_number<no_name, int64_t>";
		}

		inline static std::string json_name( daw::string_view member_name, bool use_cpp20 ) noexcept {
			return "json_number<" + impl::format_member_name( member_name, use_cpp20 ) + ", int64_t>";
		}
	};
} // namespace daw::json_to_cpp::types
