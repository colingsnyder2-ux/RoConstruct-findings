// from server: 68% by colin
extern "C" void* __stdcall _recalloc(void*, unsigned int, unsigned int);

struct CRegObject {
    void* m_pData;
    void* m_pData2;
    unsigned int m_nCount;
    int AddEntry(const void* p1, const void* p2);
};

int CRegObject::AddEntry(const void* p1, const void* p2) {
    void* pNew = _recalloc(m_pData, m_nCount + 1, 4);
    if (pNew == 0)
        return 0;
    m_pData = pNew;
    void* pNew2 = _recalloc(m_pData2, m_nCount + 1, 4);
    if (pNew2 == 0)
        return 0;
    m_pData2 = pNew2;
    unsigned int offset = m_nCount * 4;
    void* pSlot1 = (char*)m_pData + offset;
    if (pSlot1 != 0)
        *(const void**)pSlot1 = *(const void**)p1;
    void* pSlot2 = (char*)m_pData2 + offset;
    if (pSlot2 != 0)
        *(const void**)pSlot2 = *(const void**)p2;
    m_nCount++;
    return 1;
}
