// roc 2009-12 006fcfc0  unit: RBX::VSpawnLocation::?$BoundPropGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fcfc0
//
// 006fcfc0  8b442404             mov eax, dword ptr [esp + 4]
// 006fcfc4  85c0                 test eax, eax
// 006fcfc6  7405                 je 0x6fcfcd
// 006fcfc8  83c0e4               add eax, -0x1c
// 006fcfcb  eb02                 jmp 0x6fcfcf
// 006fcfcd  33c0                 xor eax, eax
// 006fcfcf  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006fcfd5  56                   push esi
// 006fcfd6  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006fcfd9  8b1432               mov edx, dword ptr [edx + esi]
// 006fcfdc  035108               add edx, dword ptr [ecx + 8]
// 006fcfdf  5e                   pop esi
// 006fcfe0  8a840298000000       mov al, byte ptr [edx + eax + 0x98]
// 006fcfe7  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000011@@QAEEPAX@Z)

namespace ns_ROCX000011 {
// from server: 100% by atomic.potato
struct S
{
    unsigned char f(void *);
    unsigned char *pad;
    unsigned char *pad2;
    unsigned char *base;
    unsigned int index;
};

unsigned char S::f(void *p)
{
    unsigned char *x;
    if (p)
        x = (unsigned char *)p - 0x1c;
    else
        x = 0;

    unsigned char *q = *(unsigned char **)(x + 0x98);
    q = *(unsigned char **)(q + index);
    q += (unsigned int)base;
    return *(unsigned char *)(q + (unsigned int)x + 0x98);
}
}
