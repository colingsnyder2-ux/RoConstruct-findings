// from server: 86% by colin
struct CArray {
    int m_nSize;
    int m_nGrowBy;
    int m_nMaxSize;
    void** m_pData;
    void RemoveAll();
};

extern "C" void __stdcall sub_643750(void*);

void CArray::RemoveAll()
{
    while (m_nSize > 0) {
        sub_643750(m_pData[0]);
    }
}
