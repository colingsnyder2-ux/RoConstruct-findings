// roc 2007-03 00682e60  unit: seg_00680000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00682e60
//
// 00682e60  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00682e66  85c0                 test eax, eax
// 00682e68  7414                 je 0x682e7e
// 00682e6a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00682e6e  8bff                 mov edi, edi
// 00682e70  3bc1                 cmp eax, ecx
// 00682e72  740f                 je 0x682e83
// 00682e74  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00682e7a  85c0                 test eax, eax
// 00682e7c  75f2                 jne 0x682e70
// 00682e7e  33c0                 xor eax, eax
// 00682e80  c20400               ret 4
// 00682e83  b801000000           mov eax, 1
// 00682e88  c20400               ret 4
// copied from an identical function in another client (function ?IsChildOf@CXTPPropertyGridItem@ns_ROCX00000b@@QBEHH@Z)

namespace ns_ROCX00000b {
struct CXTPPropertyGridItem {
    int IsChildOf(int) const;
};

int CXTPPropertyGridItem::IsChildOf(int arg) const {
    const CXTPPropertyGridItem* p = *(const CXTPPropertyGridItem**)((const char*)this + 0xb0);
    while (p) {
        if (p == (const CXTPPropertyGridItem*)arg)
            return 1;
        p = *(const CXTPPropertyGridItem**)((const char*)p + 0xb0);
    }
    return 0;
}
}
