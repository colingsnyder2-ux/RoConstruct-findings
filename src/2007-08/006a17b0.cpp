// from server: 92% by colin
struct CXTPDockBar_UDOCK_INFO_CArray
{
    int Find(void* p, int nStart) const;
    char pad[0x5c];
    void** m_pData;
    int m_nSize;
};

int CXTPDockBar_UDOCK_INFO_CArray::Find(void* p, int nStart) const
{
    int nCount = m_nSize;
    int i = 0;
    if (nCount > 0)
    {
        do
        {
            if (i != nStart)
            {
                if (i < 0 || i >= nCount)
                    break;
                if (m_pData[i] == p)
                    return i;
            }
            ++i;
        } while (i < nCount);
    }
    return -1;
}
