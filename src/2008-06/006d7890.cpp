// from server: 29% by tester
struct CXTPReportRecords {
    int RemoveAt(int index);
    int GetCount() const;
    int Find(void* record) const;
    void* GetAt(int index) const;
    void OnRemoved(int index);
    int m_nCount;
    char pad[0x1c];
    void* m_pArray;
    int m_nSize;
    int m_nGrowBy;
};

int CXTPReportRecords::RemoveAt(int index) {
    int count = m_nCount;
    int i = 0;
    if (count > 0) {
        void* record = *(void**)((char*)this + 0x10);
        while (i >= 0 && i < m_nSize) {
            if (m_pArray && ((void**)m_pArray)[i] == record) {
                break;
            }
            i++;
            if (i >= count) {
                return -1;
            }
        }
        if (i < 0 || i >= m_nSize) {
            return -1;
        }
        OnRemoved(i);
        return i;
    }
    return -1;
}
