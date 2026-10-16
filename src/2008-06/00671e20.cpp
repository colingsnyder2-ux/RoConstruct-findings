// from server: 42% by colin
struct Vec {
    int* begin;
    int* end;
    int* cap;
};

struct Inner {
    char pad[0x0c];
    int* begin;
    int* end;
    int* cap;
};

struct Outer {
    char pad0[0x0c];
    int* begin;
    int* end;
    int* cap;
};

struct S {
    char pad0[0x48];
    Outer outer;
    char pad1[0x0c];
    Inner inner;
    char pad2[0x08];
    int count;

    void f();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void __stdcall helper1(void* dst, int* first, int* last, int* src);
void __stdcall helper2(void* dst, int* first, int* last, int* src);

void S::f()
{
    int n = count - *(int*)((char*)this + 0x6c);
    int i = 0;
    if ((n & 0xfffffffc) > 0) {
        do {
            int idx = i;
            int sz = (int)((char*)inner.end - (char*)inner.begin) >> 2;
            if ((unsigned)idx >= (unsigned)sz)
                _invalid_parameter_noinfo();

            int* src = inner.begin + idx;

            int* b = outer.begin;
            int* e = outer.end;
            int* c = outer.cap;

            int cap = (b == 0) ? 0 : (int)((char*)c - (char*)b) >> 2;
            int len = (int)((char*)e - (char*)b) >> 2;

            if ((unsigned)len < (unsigned)cap) {
                *e = *src;
                outer.end = e + 1;
            } else {
                if (b > e)
                    _invalid_parameter_noinfo();
                helper2(&outer, b, e, src);
            }

            i++;
            int sz2 = (int)((char*)inner.end - (char*)inner.begin) >> 2;
            if (i >= sz2)
                break;
        } while (1);
    }

    int* e2 = inner.end;
    if (inner.begin > e2)
        _invalid_parameter_noinfo();

    int* b2 = inner.begin;
    int* c2 = inner.cap;
    if (b2 > inner.end)
        _invalid_parameter_noinfo();

    helper1(&inner, inner.begin, e2, b2);
}
