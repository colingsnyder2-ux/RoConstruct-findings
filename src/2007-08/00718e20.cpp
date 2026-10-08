// from server: 88% by colin
// roc 2007-08 00718e20  unit: CXTPRibbonQuickAccessControls  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00718e20
//
// 00718e20  56                   push esi
// 00718e21  8bf1                 mov esi, ecx
// 00718e23  8b4620               mov eax, dword ptr [esi + 0x20]
// 00718e26  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00718e2c  8b11                 mov edx, dword ptr [ecx]
// 00718e2e  8b442408             mov eax, dword ptr [esp + 8]
// 00718e32  8b5258               mov edx, dword ptr [edx + 0x58]
// 00718e35  50                   push eax
// 00718e36  ffd2                 call edx
// 00718e38  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718e3b  8b01                 mov eax, dword ptr [ecx]
// 00718e3d  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00718e43  ffd2                 call edx
// 00718e45  5e                   pop esi
// 00718e46  c20400               ret 4

struct Inner {
    virtual void f58(int);
};

struct Mid {
    virtual void f17c();
};

struct Outer {
    char pad[0x20];
    Mid* p20;
};

struct CXTPRibbonQuickAccessControls {
    char pad[0x20];
    Outer* p20;
    void func(int);
};

void CXTPRibbonQuickAccessControls::func(int arg)
{
    Inner* inner = *(Inner**)((char*)p20 + 0xf8);
    inner->f58(arg);
    Mid* mid = (Mid*)p20;
    mid->f17c();
}
