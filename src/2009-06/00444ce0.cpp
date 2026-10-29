// roc 2009-06 00444ce0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444ce0
//
// 00444ce0  51                   push ecx
// 00444ce1  8bc1                 mov eax, ecx
// 00444ce3  8b08                 mov ecx, dword ptr [eax]
// 00444ce5  8b4004               mov eax, dword ptr [eax + 4]
// 00444ce8  8b11                 mov edx, dword ptr [ecx]
// 00444cea  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00444ced  56                   push esi
// 00444cee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444cf2  50                   push eax
// 00444cf3  56                   push esi
// 00444cf4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00444cfc  ffd2                 call edx
// 00444cfe  8bc6                 mov eax, esi
// 00444d00  5e                   pop esi
// 00444d01  59                   pop ecx
// 00444d02  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUResult@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Result {
    Result(const Result&);
    ~Result();
    int value;
};

struct Interface {
    virtual void f0() = 0;
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual void f4() = 0;
    virtual void f5() = 0;
    virtual void f6() = 0;
    virtual Result get(int) = 0;
};

struct S {
    Interface* object;
    int argument;
    Result get();
};

Result S::get() {
    return object->get(argument);
}