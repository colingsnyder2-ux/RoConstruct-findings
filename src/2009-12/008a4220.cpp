// from server: 66% by atomic.potato
struct CXTPReportRecords {
    char pad[0x28];
    int m_nCount;
    char pad2[8];
    int m_nVirtualCount;
    char pad3[4];
    int GetCount();
};

struct CXTPReportRow {
    char pad[0x50];
    void* m_pRecords;
    char pad2[0x18];
    int m_nIndex;
    int GetIndex();
};

int CXTPReportRow::GetIndex()
{
    if (m_pRecords == 0)
        return 0;
    if (m_nIndex == -1)
        return 0;
    int n = ((CXTPReportRecords*)m_pRecords)->GetCount();
    if (m_nIndex < n - 1)
    {
        void* p = m_pRecords;
        int idx = m_nIndex + 1;
        return (*(int (__thiscall**)(void*, int))(*(int*)p + 0x5c))(p, idx);
    }
    return 0;
}
