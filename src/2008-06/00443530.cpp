// from server: 100% by king_originala
// roc 2008-06 00443530  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443530
//
// 00443530  8b542404             mov edx, dword ptr [esp + 4]
// 00443534  56                   push esi
// 00443535  8bf1                 mov esi, ecx
// 00443537  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044353a  8b01                 mov eax, dword ptr [ecx]
// 0044353c  8b4008               mov eax, dword ptr [eax + 8]
// 0044353f  57                   push edi
// 00443540  52                   push edx
// 00443541  ffd0                 call eax
// 00443543  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00443546  8b11                 mov edx, dword ptr [ecx]
// 00443548  8b5208               mov edx, dword ptr [edx + 8]
// 0044354b  8bf8                 mov edi, eax
// 0044354d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00443551  50                   push eax
// 00443552  ffd2                 call edx
// 00443554  33c9                 xor ecx, ecx
// 00443556  3bf8                 cmp edi, eax
// 00443558  0f94c1               sete cl
// 0044355b  5f                   pop edi
// 0044355c  8ac1                 mov al, cl
// 0044355e  5e                   pop esi
// 0044355f  c20800               ret 8

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual int get(void*) = 0;
};

struct S {
    unsigned char padding[0x18];
    Accessor* accessor;
    bool f(void*, void*);
};

bool S::f(void* first, void* second)
{
    int value = accessor->get(first);
    return value == accessor->get(second);
}
