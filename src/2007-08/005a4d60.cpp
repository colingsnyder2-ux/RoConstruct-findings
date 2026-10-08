// from server: 100% by colin
// roc 2007-08 005a4d60  unit: RBX::VHumanoid::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4d60
//
// 005a4d60  8b442404             mov eax, dword ptr [esp + 4]
// 005a4d64  85c0                 test eax, eax
// 005a4d66  7405                 je 0x5a4d6d
// 005a4d68  83c0fc               add eax, -4
// 005a4d6b  eb02                 jmp 0x5a4d6f
// 005a4d6d  33c0                 xor eax, eax
// 005a4d6f  8b9008010000         mov edx, dword ptr [eax + 0x108]
// 005a4d75  56                   push esi
// 005a4d76  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a4d79  8b1432               mov edx, dword ptr [edx + esi]
// 005a4d7c  035108               add edx, dword ptr [ecx + 8]
// 005a4d7f  5e                   pop esi
// 005a4d80  d9840208010000       fld dword ptr [edx + eax + 0x108]
// 005a4d87  c20400               ret 4

struct DescribedBase {
    char pad[0x108];
    int memberOffset;
};

struct GetSet {
    char pad0[8];
    int offset;
    char pad1[4];
    int index;
};

struct BoundPropGetSet {
    float getValue(DescribedBase* object) const;
};

float BoundPropGetSet::getValue(DescribedBase* object) const
{
    DescribedBase* base = object ? (DescribedBase*)((char*)object - 4) : 0;
    int* table = *(int**)((char*)base + 0x108);
    int idx = *(int*)((char*)this + 0xc);
    int off = *(int*)((char*)table + idx) + *(int*)((char*)this + 8);
    return *(float*)((char*)base + off + 0x108);
}
