// from server: 71% by colin
// roc 2007-08 004d0670  unit: RBX::View::PartChunk  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0670
//
// 004d0670  8b542404             mov edx, dword ptr [esp + 4]
// 004d0674  56                   push esi
// 004d0675  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d0679  8d4210               lea eax, [edx + 0x10]
// 004d067c  8d4e10               lea ecx, [esi + 0x10]
// 004d067f  3bc1                 cmp eax, ecx
// 004d0681  7306                 jae 0x4d0689
// 004d0683  b001                 mov al, 1
// 004d0685  5e                   pop esi
// 004d0686  c20800               ret 8
// 004d0689  7606                 jbe 0x4d0691
// 004d068b  32c0                 xor al, al
// 004d068d  5e                   pop esi
// 004d068e  c20800               ret 8
// 004d0691  8b420c               mov eax, dword ptr [edx + 0xc]
// 004d0694  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d0697  3bc1                 cmp eax, ecx
// 004d0699  7ce8                 jl 0x4d0683
// 004d069b  7fee                 jg 0x4d068b
// 004d069d  3bd6                 cmp edx, esi
// 004d069f  0f92c0               setb al
// 004d06a2  5e                   pop esi
// 004d06a3  c20800               ret 8

struct PartChunk {
    char pad0[0xc];
    int field_c;
    char pad10[0x10];
};

bool lessThan(const PartChunk* a, const PartChunk* b) {
    if ((unsigned int)(a + 1) < (unsigned int)(b + 1))
        return true;
    if ((unsigned int)(a + 1) > (unsigned int)(b + 1))
        return false;
    if (a->field_c < b->field_c)
        return true;
    if (a->field_c > b->field_c)
        return false;
    return a < b;
}
