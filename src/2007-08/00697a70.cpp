// from server: 100% by colin
// roc 2007-08 00697a70  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697a70
//
// 00697a70  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00697a76  85c0                 test eax, eax
// 00697a78  7414                 je 0x697a8e
// 00697a7a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00697a7e  8bff                 mov edi, edi
// 00697a80  3bc1                 cmp eax, ecx
// 00697a82  740f                 je 0x697a93
// 00697a84  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00697a8a  85c0                 test eax, eax
// 00697a8c  75f2                 jne 0x697a80
// 00697a8e  33c0                 xor eax, eax
// 00697a90  c20400               ret 4
// 00697a93  b801000000           mov eax, 1
// 00697a98  c20400               ret 4

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
