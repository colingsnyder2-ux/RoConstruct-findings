// from server: 100% by colin
// roc 2007-08 005d1e60  unit: RBX::VTool::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1e60
//
// 005d1e60  8b442404             mov eax, dword ptr [esp + 4]
// 005d1e64  85c0                 test eax, eax
// 005d1e66  7405                 je 0x5d1e6d
// 005d1e68  83c0fc               add eax, -4
// 005d1e6b  eb02                 jmp 0x5d1e6f
// 005d1e6d  33c0                 xor eax, eax
// 005d1e6f  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 005d1e75  56                   push esi
// 005d1e76  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005d1e79  8b1432               mov edx, dword ptr [edx + esi]
// 005d1e7c  035108               add edx, dword ptr [ecx + 8]
// 005d1e7f  5e                   pop esi
// 005d1e80  8a840268010000       mov al, byte ptr [edx + eax + 0x168]
// 005d1e87  c20400               ret 4

struct DescribedBase {
    char pad[0x168];
    int memberTable;
};

struct GetSet {
    char pad0[8];
    int offset;
    char pad1[4];
    int index;
};

struct BoundPropGetSet {
    char pad0[8];
    int offset;
    char pad1[4];
    int index;
    unsigned char getValue(const DescribedBase* object) const;
};

unsigned char BoundPropGetSet::getValue(const DescribedBase* object) const {
    const DescribedBase* c = object;
    if (c) {
        c = (const DescribedBase*)((const char*)c - 4);
    } else {
        c = 0;
    }
    int table = *(int*)((const char*)c + 0x168);
    int idx = *(int*)((const char*)this + 0xc);
    int off = *(int*)(table + idx);
    off += *(int*)((const char*)this + 8);
    return *(unsigned char*)((const char*)c + off + 0x168);
}
