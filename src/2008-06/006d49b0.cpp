// from server: 72% by colin




struct CSize {
    int cx;
    int cy;
};

struct CXTPReportColumn {
    char pad[0x24];
    CSize m_szText;
    int GetTextExtent(CSize* pSize);
    int GetWidth();
    int CalcWidth(int nWidth);
    int sub_803ee0();
};

extern "C" int __stdcall sub_802fe0(CSize* pSize);

extern "C" int __stdcall sub_802140(int, int);

int CXTPReportColumn::CalcWidth(int nWidth)
{
    CSize size;
    sub_802fe0(&size);
    int n = sub_803ee0();
    int w = sub_802140(n, nWidth);
    return w;
}
