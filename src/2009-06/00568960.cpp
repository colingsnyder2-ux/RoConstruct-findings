// roc 2009-06 00568960  unit: RBX::RbxG3D::RenderScene  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568960
//
// 00568960  8b442404             mov eax, dword ptr [esp + 4]
// 00568964  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00568968  8b10                 mov edx, dword ptr [eax]
// 0056896a  8b4234               mov eax, dword ptr [edx + 0x34]
// 0056896d  56                   push esi
// 0056896e  8b31                 mov esi, dword ptr [ecx]
// 00568970  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00568973  3bc1                 cmp eax, ecx
// 00568975  7213                 jb 0x56898a
// 00568977  750d                 jne 0x568986
// 00568979  d94630               fld dword ptr [esi + 0x30]
// 0056897c  d85a30               fcomp dword ptr [edx + 0x30]
// 0056897f  dfe0                 fnstsw ax
// 00568981  f6c405               test ah, 5
// 00568984  7b04                 jnp 0x56898a
// 00568986  33c0                 xor eax, eax
// 00568988  5e                   pop esi
// 00568989  c3                   ret 
// 0056898a  b801000000           mov eax, 1
// 0056898f  5e                   pop esi
// 00568990  c3                   ret 
// copied from an identical function in another client (function ?compare@@YAHABQBUItem@@0@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Item {
    char padding[0x30];
    float depth;
    unsigned int layer;
};

int __cdecl compare(const Item* const& left, const Item* const& right)
{
    if (left->layer < right->layer ||
        (left->layer == right->layer && left->depth > right->depth))
        return 1;
    return 0;
}