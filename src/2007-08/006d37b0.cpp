// from server: 88% by colin
// roc 2007-08 006d37b0  unit: PAVCXTPReportColumn::?$CArray  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d37b0

extern "C" int __stdcall InterlockedIncrement(int*);

int __fastcall sub_65e5b0(void* p);
int __fastcall sub_6d2910(void* p, int a, void* b);

struct CXTPReportColumn {
    char pad[4];
    int m_ref;
};

struct CXTPReportColumns {
    char pad[0x28];
    int m_nCount;
};

struct CXTPReportControl {
    char pad[0x2c];
    CXTPReportColumn** m_pArray;
    int m_nCount;
    void Process(CXTPReportColumns* pColumns);
};

void CXTPReportControl::Process(CXTPReportColumns* pColumns)
{
    int nCount = m_nCount;
    for (int i = 0; i < nCount; ++i)
    {
        if (i < 0)
            continue;
        if (i >= m_nCount)
            continue;
        CXTPReportColumn* pCol = m_pArray[i];
        if (pCol == 0)
            continue;
        if (sub_65e5b0(pCol) == 0)
            continue;
        int n = pColumns->m_nCount;
        sub_6d2910((char*)pColumns + 0x28, n, pCol);
        InterlockedIncrement(&pCol->m_ref);
    }
}
