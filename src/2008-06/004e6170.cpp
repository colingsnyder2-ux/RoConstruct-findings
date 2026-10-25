// from server: 100% by tester
// roc 2008-06 004e6170  unit: RBX::ViewNew::PartChunk  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6170
//
// 004e6170  8b542404             mov edx, dword ptr [esp + 4]
// 004e6174  8b420c               mov eax, dword ptr [edx + 0xc]
// 004e6177  56                   push esi
// 004e6178  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e617c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e617f  3bc1                 cmp eax, ecx
// 004e6181  7d06                 jge 0x4e6189
// 004e6183  b001                 mov al, 1
// 004e6185  5e                   pop esi
// 004e6186  c20800               ret 8
// 004e6189  7e06                 jle 0x4e6191
// 004e618b  32c0                 xor al, al
// 004e618d  5e                   pop esi
// 004e618e  c20800               ret 8
// 004e6191  3bd6                 cmp edx, esi
// 004e6193  0f92c0               setb al
// 004e6196  5e                   pop esi
// 004e6197  c20800               ret 8

struct PartChunk
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

bool __stdcall compareChunks(PartChunk* a, PartChunk* b)
{
    if (a->field_c < b->field_c)
        return true;
    if (a->field_c > b->field_c)
        return false;
    return a < b ? true : false;
}
