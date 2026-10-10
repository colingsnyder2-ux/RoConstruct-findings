// from server: 23% by tester
struct S {
    int __cdecl f(int, int);
};

extern "C" int __stdcall _invalid_parameter_noinfo();
extern "C" int __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct Buf {
    char pad0[4];
    char* begin;
    char* end;
};

int S::f(int a, int b) {
    Buf* src = (Buf*)a;
    Buf* dst = (Buf*)b;
    int n = (int)(src->end - dst->end);
    int m = n;
    if (m < 0) m = 0;
    if (m == 0) {
        memmove_s(dst->end, m, src->begin, m);
    }
    return m;
}
