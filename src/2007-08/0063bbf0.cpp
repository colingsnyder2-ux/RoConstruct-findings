// from server: 77% by colin
struct CXTPControlAction {
    int m_nCount;
    int m_nGrowBy;
    void** m_pData;
    void SetAll(void* p);
};

void CXTPControlAction::SetAll(void* p)
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            if (i < 0 || i >= m_nCount)
                break;
            void* item = m_pData[i];
            (*(void (__thiscall**)(void*, void*))(*(int*)item + 0x138))(item, p);
            ++i;
        } while (i < m_nCount);
    }
}
