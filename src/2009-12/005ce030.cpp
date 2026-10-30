// roc 2009-12 005ce030  unit: RBX::PartChunk  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce030
//
// 005ce030  8b542404             mov edx, dword ptr [esp + 4]
// 005ce034  56                   push esi
// 005ce035  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ce039  8d4210               lea eax, [edx + 0x10]
// 005ce03c  8d4e10               lea ecx, [esi + 0x10]
// 005ce03f  3bc1                 cmp eax, ecx
// 005ce041  7306                 jae 0x5ce049
// 005ce043  b001                 mov al, 1
// 005ce045  5e                   pop esi
// 005ce046  c20800               ret 8
// 005ce049  7606                 jbe 0x5ce051
// 005ce04b  32c0                 xor al, al
// 005ce04d  5e                   pop esi
// 005ce04e  c20800               ret 8
// 005ce051  8b420c               mov eax, dword ptr [edx + 0xc]
// 005ce054  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ce057  3bc1                 cmp eax, ecx
// 005ce059  7ce8                 jl 0x5ce043
// 005ce05b  7fee                 jg 0x5ce04b
// 005ce05d  3bd6                 cmp edx, esi
// 005ce05f  0f92c0               setb al
// 005ce062  5e                   pop esi
// 005ce063  c20800               ret 8
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