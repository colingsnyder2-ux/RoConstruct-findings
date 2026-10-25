// from server: 100% by king_originala
// roc 2008-06 0056e510  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e510
//
// 0056e510  51                   push ecx
// 0056e511  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e515  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e518  8b01                 mov eax, dword ptr [ecx]
// 0056e51a  8b4008               mov eax, dword ptr [eax + 8]
// 0056e51d  56                   push esi
// 0056e51e  52                   push edx
// 0056e51f  8d542414             lea edx, [esp + 0x14]
// 0056e523  52                   push edx
// 0056e524  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056e52c  ffd0                 call eax
// 0056e52e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e532  8d4c2410             lea ecx, [esp + 0x10]
// 0056e536  51                   push ecx
// 0056e537  56                   push esi
// 0056e538  e863030500           call 0x5be8a0
// 0056e53d  83c408               add esp, 8
// 0056e540  8bc6                 mov eax, esi
// 0056e542  5e                   pop esi
// 0056e543  59                   pop ecx
// 0056e544  c20800               ret 8

struct Accessor
{
    virtual void slot0();
    virtual void slot1();
    virtual void get(void** result, void* source);
};

extern void __cdecl copyValue(void* destination, const void* source);

struct S
{
    unsigned char padding[24];
    Accessor* accessor;
    void* f(void* destination, void* source);
};

void* S::f(void* destination, void* source)
{
    volatile unsigned long temporary = 0;
    accessor->get(&source, source);
    copyValue(destination, &source);
    return destination;
}
