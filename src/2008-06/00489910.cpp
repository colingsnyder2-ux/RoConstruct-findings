#include <intrin.h>
// from server: 93% by colin
// from server: 92% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Result {
    float x, y, width, height;
};

struct S {
    char padding[0x1c8];
    short x, y, width, height;

    Result* f(Result* result) const;
};

Result* S::f(Result* result) const {
    float a = (float)x;
    float b = (float)y;
    float c = (float)width;
    float d = (float)height;
    _ReadWriteBarrier();

    result->x = a;
    result->y = b;
    result->width = c;
    result->height = d;
    return result;
}


