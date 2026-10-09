// from server: 60% by colin
// roc 2007-08 0046a710  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046a710

extern "C" void __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_630B9E(void*, const char*);
extern "C" void __stdcall sub_77E6EC(void*);

struct LDraw2RobloxMapRoot
{
    void func(unsigned int n);
};

void LDraw2RobloxMapRoot::func(unsigned int n)
{
    if (n <= 0)
    {
        sub_62FEF6(0);
        return;
    }
    unsigned int q = 0xFFFFFFFFu / n;
    if (q >= 0x40)
    {
        sub_62FEF6(0);
        return;
    }
    void* p = 0;
    sub_77E6EC(&p);
    sub_630B9E(&p, "hq<t");
}
