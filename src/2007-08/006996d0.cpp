// from server: 74% by colin
// roc 2007-08 006996d0  unit: CXTPPropertyGridItem  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006996d0
//
// 006996d0  56                   push esi
// 006996d1  8bf1                 mov esi, ecx
// 006996d3  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 006996d9  33d2                 xor edx, edx
// 006996db  395128               cmp dword ptr [ecx + 0x28], edx
// 006996de  7e1f                 jle 0x6996ff
// 006996e0  52                   push edx
// 006996e1  e81af9ffff           call 0x699000
// 006996e6  8bc8                 mov ecx, eax
// 006996e8  e813e6ffff           call 0x697d00
// 006996ed  85c0                 test eax, eax
// 006996ef  7412                 je 0x699703
// 006996f1  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 006996f7  83c201               add edx, 1
// 006996fa  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 006996fd  7ce1                 jl 0x6996e0
// 006996ff  33c0                 xor eax, eax
// 00699701  5e                   pop esi
// 00699702  c3                   ret 
// 00699703  b801000000           mov eax, 1
// 00699708  5e                   pop esi
// 00699709  c3                   ret 

struct CXTPPropertyGridItem
{
    char pad[0xb8];
    void* m_pItems;
    int IsSelected();
};

struct CXTPPropertyGridItems
{
    char pad[0x28];
    int m_nCount;
};

extern "C" void* __stdcall sub_699000(int index);
extern "C" int __stdcall sub_697D00(void* item);

int CXTPPropertyGridItem::IsSelected()
{
    CXTPPropertyGridItems* pItems = (CXTPPropertyGridItems*)m_pItems;
    int i = 0;
    if (pItems->m_nCount > 0)
    {
        do
        {
            void* pItem = sub_699000(i);
            if (sub_697D00(pItem))
                return 1;
            pItems = (CXTPPropertyGridItems*)m_pItems;
            i++;
        } while (i < pItems->m_nCount);
    }
    return 0;
}
