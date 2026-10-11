// from server: 81% by atomic.potato
extern "C" long __stdcall InterlockedIncrement(long volatile *);

struct VCXTPReportRowInternalCollection
{
    char pad0[4];
    void **m_pData;
    int m_nCount;
    void *GetAt(int nIndex, int *pValue);
};

void *VCXTPReportRowInternalCollection::GetAt(int nIndex, int *pValue)
{
    if (nIndex < 0 || nIndex >= m_nCount)
        return 0;
    void **pEntry = (void **)((char *)m_pData + nIndex * 8);
    if (pValue != 0 && pEntry[1] != 0)
        InterlockedIncrement((long *)((char *)pEntry[1] + 4));
    return pEntry[1];
}
