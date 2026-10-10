// from server: 95% by colin
struct CXTPReportColumnsHelper {
    int method(int, int);
};

struct CXTPReportColumns {
    int Add(int);
    char pad[0x24];
    int m_nCount;
};

int CXTPReportColumns::Add(int nItem)
{
    int nIndex = m_nCount;
    ((CXTPReportColumnsHelper*)((char*)this + 0x24))->method(nIndex, nItem);
    return nIndex;
}
