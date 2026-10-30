// roc 2009-06 00848170  unit: RBX::RbxG3D::Material::Level  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848170
//
// 00848170  51                   push ecx
// 00848171  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00848174  c7042400000000       mov dword ptr [esp], 0
// 0084817b  85c9                 test ecx, ecx
// 0084817d  750a                 jne 0x848189
// 0084817f  8b442408             mov eax, dword ptr [esp + 8]
// 00848183  8908                 mov dword ptr [eax], ecx
// 00848185  59                   pop ecx
// 00848186  c20800               ret 8
// 00848189  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084818d  8b01                 mov eax, dword ptr [ecx]
// 0084818f  8b4018               mov eax, dword ptr [eax + 0x18]
// 00848192  56                   push esi
// 00848193  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00848197  52                   push edx
// 00848198  56                   push esi
// 00848199  ffd0                 call eax
// 0084819b  8bc6                 mov eax, esi
// 0084819d  5e                   pop esi
// 0084819e  59                   pop ecx
// 0084819f  c20800               ret 8
// copied from an identical function in another client (function ?get@S@@QAE?AUResult@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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