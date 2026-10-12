// from server: 76% by king_originala
class _com_error {};

struct S {
    unsigned char padding[12];
    int source;
    int result;

    bool check(void*);
    int compute(int, void*, void*);
    void f(void*, void*);
};

#pragma optimize("", off)
void S::f(void* a, void* b)
{
    if (check(a)) {
        try {
            result = compute(source, a, b);
        }
        catch (const _com_error&) {
        }
    }
}
#pragma optimize("", on)
