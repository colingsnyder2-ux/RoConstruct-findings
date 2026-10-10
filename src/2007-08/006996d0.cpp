// from server: 75% by colin
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

extern "C" void* __stdcall sub_699000(void* pItems, int nIndex);
extern "C" int __stdcall sub_697D00(void* pItem);

int CXTPPropertyGridItem::IsSelected()
{
    CXTPPropertyGridItems* pItems = (CXTPPropertyGridItems*)m_pItems;
    int i = 0;
    if (pItems->m_nCount > 0)
    {
        do
        {
            void* pItem = sub_699000(pItems, i);
            if (sub_697D00(pItem))
                return 1;
            pItems = (CXTPPropertyGridItems*)m_pItems;
            i++;
        } while (i < pItems->m_nCount);
    }
    return 0;
}
