#include <sqlite_orm/sqlite_orm.h>
#include <catch2/catch.hpp>

using namespace sqlite_orm;

TEST_CASE("statement_serializer autoincrement") {
    internal::schema_objects<> storage;
    internal::serializer_context<internal::schema_objects<>> context{storage};
    auto autoinc = autoincrement();
    auto value = serialize(autoinc, context);
    REQUIRE(value == "AUTOINCREMENT");
}
