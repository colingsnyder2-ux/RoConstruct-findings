// from server: 47% by atomic.potato
extern "C" int __cdecl helper_007a8bea(int, int, int, int, int);
extern "C" void __cdecl helper_007a89b2(void*, void*);
extern "C" void* __stdcall helper_009ea89c(const char*);

struct S {
    char pad[0x38];
    int (__stdcall *fn)(int);
    int field3c;
    int method(int, int);
};

int S::method(int a, int b) {
    int r = helper_007a8bea(a, 0, 0xb79040, 0xb851b0, 0);
    if (r == 0) {
        char buf[4];
        helper_009ea89c((const char*)0xa00a54);
        helper_007a89b2(buf, (void*)0xb12290);
    }
    int ecx = field3c + r;
    return fn(ecx);
}
