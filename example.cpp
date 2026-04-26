#include <print>
#include "lsid.h"

using namespace lsid::literals;

int main() {
	std::println("ID: {}", lsid::Sid("hello world").value());
	std::println("ID: {}", lsid::Sid64("hello world").value());
	std::println("ID: {}", "hello from string literal"_sid);
	std::println("ID: {}", "hello from string literal"_seq);
	std::println("ID (repeat): {}", "hello from string literal"_seq);
	std::println("ID: {}", "the next sequential entry"_seq);
	std::println("ID: {}", lsid::Ssid<"hello from compile-time">().value());

	return 0;
}