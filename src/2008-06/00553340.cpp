// from server: 96% by king_originala
struct Flag {
    void* f(int);
};

struct Temporary {
    int value;
    int* f(int, void*);
};

struct S {
    int value;
    S(int);
};

#pragma optimize("gy", off)
S reconstruct(int value, unsigned char flag)
{
    Flag flagObject;
    Temporary temporary;
    return S(*temporary.f(value, flagObject.f(flag)));
}
