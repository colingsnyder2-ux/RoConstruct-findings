// from server: 54% by atomic.potato
extern "C" void __cdecl func_007f3b0c();
extern "C" void __cdecl func_007f43d0(int, int);
extern "C" int __cdecl func_007f43d6(unsigned int, void*);
extern "C" void __cdecl func_007f43dc(unsigned int, void*);

struct S {
    char pad[0x18];
    unsigned int field_18;
    void func(unsigned int a, void* b, void* c);
};

void S::func(unsigned int a, void* b, void* c)
{
    if (a != 0 && b == 0)
        func_007f3b0c();

    unsigned int ecx = ~field_18;
    if (ecx & 1) {
        while (a > 0) {
            unsigned int edi = a;
            if (a >= 0x2aaaaaa)
                edi = 0x2aaaaaa;
            unsigned int esi = edi * 3 * 16;
            func_007f43dc(esi, b);
            a -= edi;
            b = (char*)b + esi;
        }
    } else {
        while (a > 0) {
            unsigned int edi = a;
            if (a >= 0x2aaaaaa)
                edi = 0x2aaaaaa;
            unsigned int esi = edi * 3 * 16;
            int r = func_007f43d6(esi, b);
            if (r != (int)esi) {
                func_007f43d0(3, 0);
            }
            a -= edi;
            b = (char*)b + esi;
        }
    }
}
