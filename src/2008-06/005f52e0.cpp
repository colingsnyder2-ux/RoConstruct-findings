// from server: 89% by atomic.potato




extern "C" int __stdcall sputn_impl(void* buf, const char* s, int n);

struct S {
};

int __cdecl f(char* p) {
    int total = 0;
    while (total < 1) {
        int n = sputn_impl(*(void**)p, p + 12 + total, 1 - total);
        total += n;
    }
    return total == 1;
}
