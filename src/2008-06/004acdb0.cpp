// from server: 100% by king_originala
// roc 2008-06 004acdb0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acdb0
//
// 004acdb0  83ec0c               sub esp, 0xc
// 004acdb3  d9ee                 fldz 
// 004acdb5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004acdb9  8d0424               lea eax, [esp]
// 004acdbc  d91424               fst dword ptr [esp]
// 004acdbf  50                   push eax
// 004acdc0  d9542408             fst dword ptr [esp + 8]
// 004acdc4  51                   push ecx
// 004acdc5  d95c2410             fstp dword ptr [esp + 0x10]
// 004acdc9  e8029fffff           call 0x4a6cd0
// 004acdce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004acdd2  83c408               add esp, 8
// 004acdd5  83790400             cmp dword ptr [ecx + 4], 0
// 004acdd9  7409                 je 0x4acde4
// 004acddb  8d1424               lea edx, [esp]
// 004acdde  52                   push edx
// 004acddf  e86cffffff           call 0x4acd50
// 004acde4  83c40c               add esp, 0xc
// 004acde7  c3                   ret 

extern void __cdecl transfer(void *destination, const float *source);

struct S {
    char padding[4];
    int enabled;
    void apply(const float *source);
};

void __cdecl initialize(S *object, void *destination)
{
    float value[3] = { 0.0f, 0.0f, 0.0f };
    transfer(destination, value);
    if (object->enabled != 0)
        object->apply(value);
}
