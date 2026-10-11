// from server: 63% by atomic.potato
struct CArray {
    char pad[0x24];
    int* m_pData;
    int m_nSize;
    int Find(int* p);
};

int CArray::Find(int* p) {
    if (p == 0)
        return -1;
    int n = m_nSize;
    if (n <= 0)
        return -1;
    for (int i = 0; i < n; i++) {
        if (i < 0 || i >= n)
            return -1;
        if (m_pData[i] == (int)p)
            return i;
    }
    return -1;
}
