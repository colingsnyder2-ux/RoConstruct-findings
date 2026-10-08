// from server: 100% by colin
// roc 2007-08 0042f530  unit: CRobloxControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f530
//
// 0042f530  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0042f536  85c0                 test eax, eax
// 0042f538  740b                 je 0x42f545
// 0042f53a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0042f53e  7505                 jne 0x42f545
// 0042f540  33c0                 xor eax, eax
// 0042f542  c20400               ret 4
// 0042f545  8b542404             mov edx, dword ptr [esp + 4]
// 0042f549  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0042f54f  f7d2                 not edx
// 0042f551  23c2                 and eax, edx
// 0042f553  f7d8                 neg eax
// 0042f555  1bc0                 sbb eax, eax
// 0042f557  83c001               add eax, 1
// 0042f55a  c20400               ret 4

struct CRobloxControlColorSelector {
    char pad[0xd0];
    unsigned int flags;
    char pad2[0x158 - 0xd0 - 4];
    void* ptr;
    int IsSomething(unsigned int mask);
};

int CRobloxControlColorSelector::IsSomething(unsigned int mask) {
    if (ptr != 0 && *(int*)((char*)ptr + 0x3c) == 0)
        return 0;
    unsigned int v = flags & ~mask;
    return v == 0;
}
