// from server: 89% by colin
// roc 2007-08 006d3b10  unit: CXTPReportColumns  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3b10

struct CXTPReportColumns {
    int GetColumnIndex(void* pColumn);
    int MoveColumn(int nIndex, void* pColumn);
};

extern "C" int __stdcall sub_47B540();
extern "C" int __stdcall sub_63B850(int, int, int);
extern "C" int __stdcall sub_6D26B0(int, int, int);
extern "C" int __stdcall sub_6D3630(int, int);

int CXTPReportColumns::MoveColumn(int nIndex, void* pColumn)
{
    int nCount;
    int nOldIndex;

    if (nIndex < 0)
        return -1;

    nCount = sub_47B540();
    if (nIndex >= nCount)
        nIndex = sub_47B540();

    nOldIndex = sub_6D3630((int)this, (int)pColumn);
    if (nOldIndex != -1)
    {
        if (nIndex != nOldIndex)
        {
            if (nIndex > nOldIndex)
                nIndex--;
            if (nIndex != nOldIndex)
                sub_6D26B0((int)this + 0x24, nOldIndex, 1);
        }
        else
        {
            return nIndex;
        }
    }

    sub_63B850((int)this + 0x24, nIndex, (int)pColumn);
    return nIndex;
}
