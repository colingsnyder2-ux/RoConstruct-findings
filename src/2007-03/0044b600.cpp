// roc 2007-03 0044b600  unit: seg_00440000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b600
//
// 0044b600  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0044b606  85c0                 test eax, eax
// 0044b608  740b                 je 0x44b615
// 0044b60a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0044b60e  7505                 jne 0x44b615
// 0044b610  33c0                 xor eax, eax
// 0044b612  c20400               ret 4
// 0044b615  8b542404             mov edx, dword ptr [esp + 4]
// 0044b619  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0044b61f  f7d2                 not edx
// 0044b621  23c2                 and eax, edx
// 0044b623  f7d8                 neg eax
// 0044b625  1bc0                 sbb eax, eax
// 0044b627  83c001               add eax, 1
// 0044b62a  c20400               ret 4
// copied from an identical function in another client (function ?IsSomething@CRobloxControlColorSelector@ns_ROCX000003@@QAEHI@Z)

namespace ns_ROCX000003 {
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
}
