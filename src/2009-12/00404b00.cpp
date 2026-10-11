// from server: 74% by atomic.potato
extern "C" void* __cdecl _recalloc(void*, unsigned int, unsigned int);

struct CComClassFactory {
    void* m_pData;
    void* m_pData2;
    unsigned int m_nCount;
    int AddRefToArray(void** ppFirst, void** ppSecond);
};

int CComClassFactory::AddRefToArray(void** ppFirst, void** ppSecond) {
    void* pNew = _recalloc(m_pData, m_nCount + 1, 4);
    if (pNew == 0)
        return 0;
    m_pData = pNew;
    void* pNew2 = _recalloc(m_pData2, m_nCount + 1, 4);
    if (pNew2 == 0)
        return 0;
    m_pData2 = pNew2;
    unsigned int offset = m_nCount * 4;
    void** pSlot = (void**)((char*)m_pData + offset);
    if (pSlot != 0)
        *pSlot = *ppFirst;
    void** pSlot2 = (void**)((char*)m_pData2 + offset);
    if (pSlot2 != 0)
        *pSlot2 = *ppSecond;
    m_nCount++;
    return 1;
}
