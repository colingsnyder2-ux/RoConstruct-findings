// from server: 23% by colin
struct CXTPPropertyGridItem {
    char pad0[0xfc];
    int m_nValue;
    char pad1[0x0c];
    void* m_pOwner;
    void OnValueChanged(int value);
    void SetValue(int value);
};

struct CXTPPropertyGridItemXItem {
    char pad0[0x10c];
    void SetPropertyGrid(void* pGrid);
};

extern "C" void* __stdcall c_str_helper(void* p);

void CXTPPropertyGridItemXItem::SetPropertyGrid(void* pGrid)
{
    CXTPPropertyGridItem* pItem = (CXTPPropertyGridItem*)this;
    pItem->SetValue(0);
    pItem->m_nValue = 1;
    pItem->m_pOwner = pGrid;
    pItem->OnValueChanged(1);
}
