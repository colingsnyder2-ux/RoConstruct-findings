// from server: 100% by colin
// roc 2007-08 005a0030  unit: RBX::VSpawnLocation::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0030
//
// 005a0030  8b442404             mov eax, dword ptr [esp + 4]
// 005a0034  85c0                 test eax, eax
// 005a0036  7405                 je 0x5a003d
// 005a0038  83c0fc               add eax, -4
// 005a003b  eb02                 jmp 0x5a003f
// 005a003d  33c0                 xor eax, eax
// 005a003f  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 005a0045  56                   push esi
// 005a0046  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005a0049  8b1432               mov edx, dword ptr [edx + esi]
// 005a004c  035108               add edx, dword ptr [ecx + 8]
// 005a004f  5e                   pop esi
// 005a0050  8a8402ec000000       mov al, byte ptr [edx + eax + 0xec]
// 005a0057  c20400               ret 4

struct DescribedBase {
    char pad[0xec];
};

struct GetSet {
    int pad0;
    int pad4;
    int offset8;
    int offsetc;
    char getValue(const DescribedBase* object) const;
};

char GetSet::getValue(const DescribedBase* object) const {
    const DescribedBase* c = object ? (const DescribedBase*)((const char*)object - 4) : 0;
    int idx = *(int*)((const char*)c + 0xec);
    int off = *(int*)((const char*)this + 0xc);
    int val = *(int*)((const char*)idx + off);
    val += *(int*)((const char*)this + 8);
    return *(char*)((const char*)c + 0xec + val);
}
