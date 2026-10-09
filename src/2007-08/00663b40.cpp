// from server: 53% by colin
// roc 2007-08 00663b40  unit: VCXTPReportRows  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663b40

extern "C" void* __stdcall _memmove_s_impl(void*, void*, unsigned int);
extern "C" void __cdecl _invalid_parameter_noinfo(void);

struct CXTPHeapObjectT
{
    int  m_nCount;
    void* m_pData;
    int  m_nCapacity;

    void RemoveAt(int nIndex, int nCount);
};

void CXTPHeapObjectT::RemoveAt(int nIndex, int nCount)
{
    int nNewCount = nIndex + nCount;
    if (nIndex < 0 || nCount < 0 || nNewCount > m_nCapacity || nNewCount < nIndex || nNewCount < nCount)
    {
        _invalid_parameter_noinfo();
        return;
    }

    int nRemaining = m_nCapacity - nNewCount;
    if (nRemaining != 0)
    {
        char* pBase = (char*)m_pData;
        void* pDest = pBase + nNewCount * 8;
        void* pSrc  = pBase + nIndex * 8;
        unsigned int nBytes = (unsigned int)(nRemaining * 8);
        _memmove_s_impl(pDest, pSrc, nBytes);
    }

    m_nCapacity -= nCount;
}
