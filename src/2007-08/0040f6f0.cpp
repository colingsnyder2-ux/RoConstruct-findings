// from server: 54% by colin
// roc 2007-08 0040f6f0  unit: CopyVerb  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f6f0

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_630b9e(void*, const char*);
extern "C" void* __cdecl sub_77e6ec(void*, void*);

struct CopyVerb {
    void f(unsigned int);
};

void CopyVerb::f(unsigned int n) {
    if (n <= 0) {
        unsigned int sz = 0;
        sub_62fef6(sz * 36);
        return;
    }
    unsigned int q = 0xffffffffu / n;
    if (q >= 0x24) {
        unsigned int sz = n * 36;
        sub_62fef6(sz);
        return;
    }
    void* p = 0;
    sub_77e6ec(&p, 0);
    const char* msg = (const char*)0x83f17c;
    sub_630b9e(&p, msg);
}
