// from server: 100% by king_originala
// roc 2008-06 0040a5c0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a5c0
//
// 0040a5c0  8b542404             mov edx, dword ptr [esp + 4]
// 0040a5c4  53                   push ebx
// 0040a5c5  56                   push esi
// 0040a5c6  8bf1                 mov esi, ecx
// 0040a5c8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0040a5cb  8b01                 mov eax, dword ptr [ecx]
// 0040a5cd  8b4008               mov eax, dword ptr [eax + 8]
// 0040a5d0  52                   push edx
// 0040a5d1  ffd0                 call eax
// 0040a5d3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0040a5d6  8b11                 mov edx, dword ptr [ecx]
// 0040a5d8  8b5208               mov edx, dword ptr [edx + 8]
// 0040a5db  8ad8                 mov bl, al
// 0040a5dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a5e1  50                   push eax
// 0040a5e2  ffd2                 call edx
// 0040a5e4  33c9                 xor ecx, ecx
// 0040a5e6  3ad8                 cmp bl, al
// 0040a5e8  0f94c1               sete cl
// 0040a5eb  5e                   pop esi
// 0040a5ec  8ac1                 mov al, cl
// 0040a5ee  5b                   pop ebx
// 0040a5ef  c20800               ret 8

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual bool get(const void* object) = 0;
};

struct Descriptor {
    unsigned char padding[24];
    Accessor* accessor;
    bool equal(const void* first, const void* second);
};

bool Descriptor::equal(const void* first, const void* second)
{
    bool a = accessor->get(first);
    bool b = accessor->get(second);
    return a == b;
}
