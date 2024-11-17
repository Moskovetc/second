#include "fakeit.hpp"
#include "catch2/catch_test_macros.hpp"

using namespace fakeit;

struct SomeInterface {
    virtual ~SomeInterface(void) = default;
    virtual int foo(int) = 0;
    virtual int bar(int, int) = 0;
    virtual int baz(int*, int&) = 0;
};

TEST_CASE("Example fakeIt test", "[example]" ) {
    Mock<SomeInterface> mock;

    When(Method(mock, foo).Using(Eq(0))).Return(42);

    auto const result = mock.get().foo(0);

    REQUIRE(result == 42);
    Verify(Method(mock, foo)).Exactly(1);
}