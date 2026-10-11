// from server: 46% by atomic.potato
struct CArray {
    char pad[0x20];
    int m_nSize;
    int m_nGrowBy;
    int* m_pData;
    char pad2[0x34 - 0x2c];
    void* m_pOwner;
    int GetSize();
    void SetSize(int n);
    void* GetAt(int n);
    void* CopyTo(void* p);
};

struct CXTPPropertyGridInplaceButton {
    char pad[0x20];
    CArray m_arr;
    void* m_pItem;
    void* CopyTo(CXTPPropertyGridInplaceButton* p);
};

void* CXTPPropertyGridInplaceButton::CopyTo(CXTPPropertyGridInplaceButton* p)
{
    p->m_pItem = m_pItem;
    p->m_arr.m_pOwner = m_pItem ? *(void**)((char*)m_pItem + 0xbc) : 0;
    m_arr.CopyTo(&p->m_arr);
    m_arr.SetSize(0);

    return this;
}
