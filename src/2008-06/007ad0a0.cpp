// from server: 100% by king_originala
// roc 2008-06 007ad0a0  unit: RBX::RenderNew::Material::Level  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad0a0
//
// 007ad0a0  51                   push ecx
// 007ad0a1  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007ad0a4  c7042400000000       mov dword ptr [esp], 0
// 007ad0ab  85c9                 test ecx, ecx
// 007ad0ad  750a                 jne 0x7ad0b9
// 007ad0af  8b442408             mov eax, dword ptr [esp + 8]
// 007ad0b3  8908                 mov dword ptr [eax], ecx
// 007ad0b5  59                   pop ecx
// 007ad0b6  c20800               ret 8
// 007ad0b9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007ad0bd  8b01                 mov eax, dword ptr [ecx]
// 007ad0bf  8b4018               mov eax, dword ptr [eax + 0x18]
// 007ad0c2  56                   push esi
// 007ad0c3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ad0c7  52                   push edx
// 007ad0c8  56                   push esi
// 007ad0c9  ffd0                 call eax
// 007ad0cb  8bc6                 mov eax, esi
// 007ad0cd  5e                   pop esi
// 007ad0ce  59                   pop ecx
// 007ad0cf  c20800               ret 8

struct Result {
    void* value;
};

struct Delegate {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual Result get(int argument) = 0;
};

struct S {
    unsigned char padding[12];
    Delegate* delegate;
    Result get(int argument);
};

Result S::get(int argument)
{
    Delegate* p = delegate;
    volatile unsigned int temporary = 0;
    if (!p) {
        Result result;
        result.value = p;
        return result;
    }
    return p->get(argument);
}
