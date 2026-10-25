// from server: 100% by king_originala
// roc 2008-06 00563ff0  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563ff0
//
// 00563ff0  83ec08               sub esp, 8
// 00563ff3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00563ff7  56                   push esi
// 00563ff8  8bf1                 mov esi, ecx
// 00563ffa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00563ffd  8b01                 mov eax, dword ptr [ecx]
// 00563fff  8b4008               mov eax, dword ptr [eax + 8]
// 00564002  52                   push edx
// 00564003  ffd0                 call eax
// 00564005  dd5c2404             fstp qword ptr [esp + 4]
// 00564009  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056400c  8b11                 mov edx, dword ptr [ecx]
// 0056400e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00564012  8b5208               mov edx, dword ptr [edx + 8]
// 00564015  50                   push eax
// 00564016  ffd2                 call edx
// 00564018  dc5c2404             fcomp qword ptr [esp + 4]
// 0056401c  5e                   pop esi
// 0056401d  dfe0                 fnstsw ax
// 0056401f  f6c444               test ah, 0x44
// 00564022  7a0b                 jp 0x56402f
// 00564024  b801000000           mov eax, 1
// 00564029  83c408               add esp, 8
// 0056402c  c20800               ret 8
// 0056402f  33c0                 xor eax, eax
// 00564031  83c408               add esp, 8
// 00564034  c20800               ret 8

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
