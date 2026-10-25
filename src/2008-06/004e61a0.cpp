// from server: 100% by king_originala
// roc 2008-06 004e61a0  unit: RBX::ViewNew::PartChunk  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e61a0
//
// 004e61a0  8b542404             mov edx, dword ptr [esp + 4]
// 004e61a4  56                   push esi
// 004e61a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e61a9  8d4210               lea eax, [edx + 0x10]
// 004e61ac  8d4e10               lea ecx, [esi + 0x10]
// 004e61af  3bc1                 cmp eax, ecx
// 004e61b1  7306                 jae 0x4e61b9
// 004e61b3  b001                 mov al, 1
// 004e61b5  5e                   pop esi
// 004e61b6  c20800               ret 8
// 004e61b9  7606                 jbe 0x4e61c1
// 004e61bb  32c0                 xor al, al
// 004e61bd  5e                   pop esi
// 004e61be  c20800               ret 8
// 004e61c1  8b420c               mov eax, dword ptr [edx + 0xc]
// 004e61c4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e61c7  3bc1                 cmp eax, ecx
// 004e61c9  7ce8                 jl 0x4e61b3
// 004e61cb  7fee                 jg 0x4e61bb
// 004e61cd  3bd6                 cmp edx, esi
// 004e61cf  0f92c0               setb al
// 004e61d2  5e                   pop esi
// 004e61d3  c20800               ret 8

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
