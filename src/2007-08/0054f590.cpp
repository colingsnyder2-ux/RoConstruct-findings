// from server: 89% by sophus
extern "C" int __stdcall sputn_impl(void*, const char*, int);

struct S {
};

int __cdecl f(char* p) {
    int n = 0;
    while (n < 1) {
        int r = sputn_impl(*(void**)p, p + 0x10 + n, 1 - n);
        n += r;
    }
    return n == 1;
}
