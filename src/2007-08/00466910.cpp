// from server: 83% by colin
// roc 2007-08 00466910  unit: CWebToolbox  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466910
//
// 00466910  56                   push esi
// 00466911  8bf1                 mov esi, ecx
// 00466913  e826991c00           call 0x63023e
// 00466918  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 0046691e  85c9                 test ecx, ecx
// 00466920  5e                   pop esi
// 00466921  7405                 je 0x466928
// 00466923  e8dc961c00           call 0x630004
// 00466928  c20c00               ret 0xc

struct CWebToolbox
{
    void sub_466910(int a, int b, int c);
};

extern "C" void __stdcall sub_63023E();
extern "C" void __stdcall sub_630004();

void CWebToolbox::sub_466910(int a, int b, int c)
{
    sub_63023E();
    if (*(int*)((char*)this + 0xf4) != 0)
    {
        sub_630004();
    }
}
