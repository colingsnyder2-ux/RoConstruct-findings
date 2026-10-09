// roc 2007-03 006830c0  unit: seg_00680000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006830c0
//
// 006830c0  56                   push esi
// 006830c1  8bf1                 mov esi, ecx
// 006830c3  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006830c9  85c9                 test ecx, ecx
// 006830cb  7410                 je 0x6830dd
// 006830cd  e87e500000           call 0x688150
// 006830d2  3bc6                 cmp eax, esi
// 006830d4  7507                 jne 0x6830dd
// 006830d6  b801000000           mov eax, 1
// 006830db  5e                   pop esi
// 006830dc  c3                   ret 
// 006830dd  33c0                 xor eax, eax
// 006830df  5e                   pop esi
// 006830e0  c3                   ret 
// copied from an identical function in another client (function ?IsChildOf@CXTPPropertyGridItem@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
struct CXTPPropertyGridItem {
    char pad[0xb4];
    CXTPPropertyGridItem* m_pOwner;
    CXTPPropertyGridItem* GetParent();
    int IsChildOf();
};

int CXTPPropertyGridItem::IsChildOf()
{
    CXTPPropertyGridItem* pOwner = m_pOwner;
    if (pOwner != 0)
    {
        if (pOwner->GetParent() == this)
            return 1;
    }
    return 0;
}
}
