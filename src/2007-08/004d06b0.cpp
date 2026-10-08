// from server: 94% by colin
// roc 2007-08 004d06b0  unit: RBX::View::PartChunk  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d06b0
//
// 004d06b0  8b542404             mov edx, dword ptr [esp + 4]
// 004d06b4  8b420c               mov eax, dword ptr [edx + 0xc]
// 004d06b7  56                   push esi
// 004d06b8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d06bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d06bf  3bc1                 cmp eax, ecx
// 004d06c1  7d06                 jge 0x4d06c9
// 004d06c3  b001                 mov al, 1
// 004d06c5  5e                   pop esi
// 004d06c6  c20800               ret 8
// 004d06c9  7e06                 jle 0x4d06d1
// 004d06cb  32c0                 xor al, al
// 004d06cd  5e                   pop esi
// 004d06ce  c20800               ret 8
// 004d06d1  3bd6                 cmp edx, esi
// 004d06d3  0f92c0               setb al
// 004d06d6  5e                   pop esi
// 004d06d7  c20800               ret 8

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
    return a < b;
}
