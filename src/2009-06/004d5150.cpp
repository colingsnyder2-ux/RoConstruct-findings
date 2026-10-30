// roc 2009-06 004d5150  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d5150
//
// 004d5150  83ec08               sub esp, 8
// 004d5153  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d5157  56                   push esi
// 004d5158  8bf1                 mov esi, ecx
// 004d515a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d515d  8b01                 mov eax, dword ptr [ecx]
// 004d515f  8b4008               mov eax, dword ptr [eax + 8]
// 004d5162  52                   push edx
// 004d5163  ffd0                 call eax
// 004d5165  dd5c2404             fstp qword ptr [esp + 4]
// 004d5169  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d516c  8b11                 mov edx, dword ptr [ecx]
// 004d516e  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d5172  8b5208               mov edx, dword ptr [edx + 8]
// 004d5175  50                   push eax
// 004d5176  ffd2                 call edx
// 004d5178  dc5c2404             fcomp qword ptr [esp + 4]
// 004d517c  5e                   pop esi
// 004d517d  dfe0                 fnstsw ax
// 004d517f  f6c444               test ah, 0x44
// 004d5182  7a0b                 jp 0x4d518f
// 004d5184  b801000000           mov eax, 1
// 004d5189  83c408               add esp, 8
// 004d518c  c20800               ret 8
// 004d518f  33c0                 xor eax, eax
// 004d5191  83c408               add esp, 8
// 004d5194  c20800               ret 8
// copied from an identical function in another client (function ?equal@S@@QAEHPAX0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual double get(void *);
};

struct S {
    unsigned char padding[24];
    Getter *getter;
    int equal(void *, void *);
};

int S::equal(void *first, void *second)
{
    double value = getter->get(first);
    return getter->get(second) == value ? 1 : 0;
}