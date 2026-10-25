// from server: 100% by king_originala
// roc 2008-06 0056e1c0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e1c0
//
// 0056e1c0  56                   push esi
// 0056e1c1  8d44240c             lea eax, [esp + 0xc]
// 0056e1c5  8bf1                 mov esi, ecx
// 0056e1c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e1cb  50                   push eax
// 0056e1cc  51                   push ecx
// 0056e1cd  e8be050500           call 0x5be790
// 0056e1d2  83c408               add esp, 8
// 0056e1d5  84c0                 test al, al
// 0056e1d7  741a                 je 0x56e1f3
// 0056e1d9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e1dc  8b11                 mov edx, dword ptr [ecx]
// 0056e1de  8b520c               mov edx, dword ptr [edx + 0xc]
// 0056e1e1  8d44240c             lea eax, [esp + 0xc]
// 0056e1e5  50                   push eax
// 0056e1e6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e1ea  50                   push eax
// 0056e1eb  ffd2                 call edx
// 0056e1ed  b001                 mov al, 1
// 0056e1ef  5e                   pop esi
// 0056e1f0  c20800               ret 8
// 0056e1f3  32c0                 xor al, al
// 0056e1f5  5e                   pop esi
// 0056e1f6  c20800               ret 8

extern bool __cdecl convert(unsigned int value, unsigned int *result);

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *object, const unsigned int *value);
};

struct S {
    unsigned char padding[24];
    Setter *setter;
    bool apply(void *object, unsigned int value);
};

bool S::apply(void *object, unsigned int value)
{
    if (convert(value, &value)) {
        setter->set(object, &value);
        return true;
    }
    return false;
}
