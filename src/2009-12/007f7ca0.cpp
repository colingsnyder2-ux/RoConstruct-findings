// from server: 33% by atomic.potato
struct CMap {
    char pad[0x60];
    void** m_pData;
    int m_nCount;
    void DelayLayoutParent();
    void RemoveAll();
};

void CMap::RemoveAll() {
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (i < 0 || i >= m_nCount) {
                DelayLayoutParent();
            }
            ((CMap*)m_pData[i])->DelayLayoutParent();
            i++;
        } while (i < m_nCount);
    }
}
