// Links every exact function the module swaps in (force_verified.h, written by roc/rebuild.py build_module).
#include "force_verified.h"
#include <stdexcept>
#include <stdio.h>
#include <string.h>
#pragma comment(lib, "msvcprt.lib")

void roc_boost_extra_validate_date(unsigned short, unsigned short, unsigned short);

int main()
{
    const unsigned short cases[][4] = {
        {2000, 2, 29, 0}, {1900, 2, 28, 0}, {2024, 6, 15, 0},
        {1400, 1, 1, 0}, {9999, 12, 31, 0}, {10000, 1, 1, 0},
        {1399, 1, 1, 1}, {10001, 1, 1, 1},
        {2000, 0, 1, 2}, {2000, 13, 1, 2},
        {2000, 1, 0, 3}, {2000, 1, 32, 3},
        {1900, 2, 29, 3}, {2000, 2, 30, 3}
    };
    const char* prefixes[] = {"", "Year", "Month", "Day"};
    for (unsigned i = 0; i < sizeof(cases) / sizeof(cases[0]); ++i) {
        try {
            roc_boost_extra_validate_date(cases[i][0], cases[i][1], cases[i][2]);
            if (cases[i][3]) return printf("missing exception case=%u\n", i), 1;
        } catch (const std::out_of_range& e) {
            if (!cases[i][3] || strstr(e.what(), prefixes[cases[i][3]]) != e.what())
                return printf("wrong exception case=%u: %s\n", i, e.what()), 2;
        } catch (const std::exception& e) {
            return printf("unexpected exception case=%u: %s\n", i, e.what()), 3;
        } catch (...) {
            return printf("unknown exception case=%u\n", i), 4;
        }
    }
    printf("Boost1.35 Gregorian cases=14\n");
    return 0;
}
