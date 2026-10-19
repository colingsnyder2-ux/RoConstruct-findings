// from server: 76% by TrollStein
struct CXTPReportHyperlinkArray
{
    virtual int GetCount();
    virtual void SetAt(int nIndex, int nValue);
};

void CXTPReportHyperlinkArray::SetAt(int nIndex, int nValue)
{
    if (nIndex < 0 || nIndex >= GetCount())
        throw 0x8002000b;
    SetAt(nIndex, nValue);
}
