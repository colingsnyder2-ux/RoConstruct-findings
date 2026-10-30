// roc 2009-06 00440610  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440610
//
// 00440610  51                   push ecx
// 00440611  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00440615  56                   push esi
// 00440616  8bf1                 mov esi, ecx
// 00440618  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044061b  8b01                 mov eax, dword ptr [ecx]
// 0044061d  8b4008               mov eax, dword ptr [eax + 8]
// 00440620  52                   push edx
// 00440621  8d542408             lea edx, [esp + 8]
// 00440625  52                   push edx
// 00440626  ffd0                 call eax
// 00440628  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044062c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044062f  8b11                 mov edx, dword ptr [ecx]
// 00440631  8b5208               mov edx, dword ptr [edx + 8]
// 00440634  50                   push eax
// 00440635  8d442414             lea eax, [esp + 0x14]
// 00440639  50                   push eax
// 0044063a  ffd2                 call edx
// 0044063c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00440640  33c0                 xor eax, eax
// 00440642  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 00440646  5e                   pop esi
// 00440647  0f94c0               sete al
// 0044064a  59                   pop ecx
// 0044064b  c20800               ret 8
// copied from an identical function in another client (function ?equal@S@@QAEHII@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Getter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void get(unsigned int* result, unsigned int object) = 0;
};

struct S {
    unsigned char padding[24];
    Getter* getter;
    int equal(unsigned int a, unsigned int b);
};

int S::equal(unsigned int a, unsigned int b)
{
    unsigned int value;
    getter->get(&value, b);
    getter->get(&b, a);
    return b == value;
}