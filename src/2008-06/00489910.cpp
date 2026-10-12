// from server: 71% by king_originala
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

    result->x = a;
    result->y = b;
    result->width = c;
    result->height = d;
    return result;
}
