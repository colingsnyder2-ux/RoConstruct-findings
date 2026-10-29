// roc 2010-06 0052cf20  unit: RBX::VTextureProxyBase::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052cf20
//
// 0052cf20  8b542404             mov edx, dword ptr [esp + 4]
// 0052cf24  56                   push esi
// 0052cf25  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052cf29  8d4210               lea eax, [edx + 0x10]
// 0052cf2c  8d4e10               lea ecx, [esi + 0x10]
// 0052cf2f  3bc1                 cmp eax, ecx
// 0052cf31  7306                 jae 0x52cf39
// 0052cf33  b001                 mov al, 1
// 0052cf35  5e                   pop esi
// 0052cf36  c20800               ret 8
// 0052cf39  7606                 jbe 0x52cf41
// 0052cf3b  32c0                 xor al, al
// 0052cf3d  5e                   pop esi
// 0052cf3e  c20800               ret 8
// 0052cf41  8b420c               mov eax, dword ptr [edx + 0xc]
// 0052cf44  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052cf47  3bc1                 cmp eax, ecx
// 0052cf49  7ce8                 jl 0x52cf33
// 0052cf4b  7fee                 jg 0x52cf3b
// 0052cf4d  3bd6                 cmp edx, esi
// 0052cf4f  0f92c0               setb al
// 0052cf52  5e                   pop esi
// 0052cf53  c20800               ret 8
// copied from an identical function in another client (function ?compare@S@@QBEEPBUItem@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Item {
    char padding[12];
    int value;
    char key;
};

struct S {
    unsigned char compare(const Item* a, const Item* b) const;
};

unsigned char S::compare(const Item* a, const Item* b) const {
    if (&a->key < &b->key)
        return 1;
    if (&a->key > &b->key)
        return 0;
    if (a->value < b->value)
        return 1;
    if (a->value > b->value)
        return 0;
    return static_cast<unsigned char>(a < b);
}