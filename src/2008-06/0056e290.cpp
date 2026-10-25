// from server: 100% by king_originala
// roc 2008-06 0056e290  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e290
//
// 0056e290  51                   push ecx
// 0056e291  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e294  8b01                 mov eax, dword ptr [ecx]
// 0056e296  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e29a  8b4008               mov eax, dword ptr [eax + 8]
// 0056e29d  56                   push esi
// 0056e29e  52                   push edx
// 0056e29f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e2a7  ffd0                 call eax
// 0056e2a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e2ad  8d4c2410             lea ecx, [esp + 0x10]
// 0056e2b1  51                   push ecx
// 0056e2b2  56                   push esi
// 0056e2b3  89442418             mov dword ptr [esp + 0x18], eax
// 0056e2b7  e834fc0400           call 0x5bdef0
// 0056e2bc  83c408               add esp, 8
// 0056e2bf  8bc6                 mov eax, esi
// 0056e2c1  5e                   pop esi
// 0056e2c2  59                   pop ecx
// 0056e2c3  c20800               ret 8

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void* get(void*);
};

extern "C" void __cdecl convert(void*, void**);

struct S {
    unsigned char padding[24];
    Accessor* accessor;
    void* f(void* result, void* object);
};

void* S::f(void* result, void* object)
{
    volatile unsigned int unused = 0;
    object = accessor->get(object);
    convert(result, &object);
    return result;
}
