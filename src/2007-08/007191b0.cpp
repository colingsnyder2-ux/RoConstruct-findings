// from server: 73% by colin
// roc 2007-08 007191b0  unit: CXTPRibbonGroupControlPopup  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007191b0
//
// 007191b0  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 007191b6  85c0                 test eax, eax
// 007191b8  7406                 je 0x7191c0
// 007191ba  83783c00             cmp dword ptr [eax + 0x3c], 0
// 007191be  742d                 je 0x7191ed
// 007191c0  8b442404             mov eax, dword ptr [esp + 4]
// 007191c4  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 007191ca  f7d0                 not eax
// 007191cc  23d0                 and edx, eax
// 007191ce  f7da                 neg edx
// 007191d0  1bd2                 sbb edx, edx
// 007191d2  42                   inc edx
// 007191d3  7418                 je 0x7191ed
// 007191d5  8b8978010000         mov ecx, dword ptr [ecx + 0x178]
// 007191db  85c9                 test ecx, ecx
// 007191dd  7406                 je 0x7191e5
// 007191df  83797800             cmp dword ptr [ecx + 0x78], 0
// 007191e3  7408                 je 0x7191ed
// 007191e5  b801000000           mov eax, 1
// 007191ea  c20400               ret 4
// 007191ed  33c0                 xor eax, eax
// 007191ef  c20400               ret 4

struct CXTPRibbonGroupControlPopup {
    char pad0[0xd0];
    unsigned int m_dwMask;      // 0xd0
    char pad1[0x158 - 0xd0 - 4];
    void* m_pSomething;         // 0x158
    char pad2[0x178 - 0x158 - 4];
    void* m_pOther;             // 0x178
    int IsVisible(unsigned int flag);
};

int CXTPRibbonGroupControlPopup::IsVisible(unsigned int flag)
{
    void* p = m_pSomething;
    if (p != 0 && *(int*)((char*)p + 0x3c) != 0)
        return 0;

    unsigned int v = m_dwMask & ~flag;
    if (v == 0)
        return 0;

    void* q = m_pOther;
    if (q != 0 && *(int*)((char*)q + 0x78) == 0)
        return 0;

    return 1;
}
