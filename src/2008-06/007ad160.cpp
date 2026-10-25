// from server: 100% by king_originala
// roc 2008-06 007ad160  unit: RBX::RenderNew::Material::Level  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad160
//
// 007ad160  51                   push ecx
// 007ad161  8b4908               mov ecx, dword ptr [ecx + 8]
// 007ad164  c7042400000000       mov dword ptr [esp], 0
// 007ad16b  85c9                 test ecx, ecx
// 007ad16d  750a                 jne 0x7ad179
// 007ad16f  8b442408             mov eax, dword ptr [esp + 8]
// 007ad173  8908                 mov dword ptr [eax], ecx
// 007ad175  59                   pop ecx
// 007ad176  c20800               ret 8
// 007ad179  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007ad17d  8b01                 mov eax, dword ptr [ecx]
// 007ad17f  8b4018               mov eax, dword ptr [eax + 0x18]
// 007ad182  56                   push esi
// 007ad183  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ad187  52                   push edx
// 007ad188  56                   push esi
// 007ad189  ffd0                 call eax
// 007ad18b  8bc6                 mov eax, esi
// 007ad18d  5e                   pop esi
// 007ad18e  59                   pop ecx
// 007ad18f  c20800               ret 8

struct Result {
    void* value;
    Result(void* p) : value(p) {}
};

struct Delegate {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual Result get(int);
};

struct S {
    unsigned char padding[8];
    Delegate* delegate;
    Result get(int);
};

Result S::get(int argument)
{
    Delegate* p = delegate;
    volatile int temporary = 0;
    if (!p)
        return Result(p);
    return p->get(argument);
}
