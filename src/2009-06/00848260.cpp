// roc 2009-06 00848260  unit: RBX::RbxG3D::Material::Level  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848260
//
// 00848260  51                   push ecx
// 00848261  8b4908               mov ecx, dword ptr [ecx + 8]
// 00848264  c7042400000000       mov dword ptr [esp], 0
// 0084826b  85c9                 test ecx, ecx
// 0084826d  750a                 jne 0x848279
// 0084826f  8b442408             mov eax, dword ptr [esp + 8]
// 00848273  8908                 mov dword ptr [eax], ecx
// 00848275  59                   pop ecx
// 00848276  c20800               ret 8
// 00848279  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084827d  8b01                 mov eax, dword ptr [ecx]
// 0084827f  8b4018               mov eax, dword ptr [eax + 0x18]
// 00848282  56                   push esi
// 00848283  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00848287  52                   push edx
// 00848288  56                   push esi
// 00848289  ffd0                 call eax
// 0084828b  8bc6                 mov eax, esi
// 0084828d  5e                   pop esi
// 0084828e  59                   pop ecx
// 0084828f  c20800               ret 8
// copied from an identical function in another client (function ?get@S@@QAE?AUResult@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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