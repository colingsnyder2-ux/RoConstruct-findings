// from server: 70% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    void* f(void*, unsigned int);
};

extern "C" void* __cdecl sub_005f20f0(void*, unsigned int, unsigned char);

void* S::f(void* a, unsigned int b)
{
    if (b == 2) {
        void* p = a;
        if (*(const type_info*)0x0089ac20 == *(const type_info*)p)
            return p;
        return 0;
    }
    unsigned char zero = 0;
    return sub_005f20f0(a, b, zero);
}
