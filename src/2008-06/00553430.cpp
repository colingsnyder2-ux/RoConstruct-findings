// from server: 45% by colin
extern "C" void __stdcall sub_402390(void*, int);
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __cdecl sub_6A158C(void*, const char*);

struct S {
    void* __cdecl f(unsigned int n);
};

void* S::f(unsigned int n) {
    if (n <= 0) {
        n = 0;
    } else {
        unsigned int q = 0xFFFFFFFFu / n;
        if (q < 0x28) {
            char buf[8];
            sub_402390(buf, 0);
            sub_6A158C(buf, (const char*)0x8D07D8);
        }
    }
    return sub_6A0920(n * 0x28);
}
