// from server: 91% by colin
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

struct VCXTPReportRow
{
    int m_nCount;
    void* m_pData;
    int m_nSize;
    void* GetAt(int nIndex, int* pValue);
};

void* VCXTPReportRow::GetAt(int nIndex, int* pValue)
{
    if (nIndex < 0 || nIndex >= m_nSize)
    {
        void* dummy = 0;
        return dummy;
    }
    char* pBase = (char*)m_pData;
    char* pEntry = pBase + nIndex * 8;
    if (pValue != 0)
    {
        long* pRef = (long*)(*(char**)(pEntry + 4));
        if (pRef != 0)
        {
            InterlockedIncrement(pRef + 1);
        }
    }
    return *(void**)(pEntry + 4);
}
