// from server: 31% by colin
struct CString
{
    char* m_pData;
    int m_nLength;

    CString();
    CString(const CString& other);
    ~CString();

    bool IsEmpty() const;
};

struct CXTPPrintPageHeaderFooter
{
    int CreatePrintPageHeaderFooter(CString& left, CString& center, CString& right, CString& header, CString& footer);
};

extern "C" void __stdcall sub_00636470();
extern "C" void __stdcall sub_0077DD74();
extern "C" void __stdcall sub_0077E1B0();
extern "C" void __stdcall sub_0077DCD0();
extern "C" void __stdcall sub_0077DDBC();

int CXTPPrintPageHeaderFooter::CreatePrintPageHeaderFooter(CString& left, CString& center, CString& right, CString& header, CString& footer)
{
    CString strLeft;
    CString strCenter;
    CString strRight;

    strLeft.m_pData = 0;
    strLeft.m_nLength = 0;
    strCenter.m_pData = 0;
    strCenter.m_nLength = 0;
    strRight.m_pData = 0;
    strRight.m_nLength = 0;

    if (!strLeft.IsEmpty() && strCenter.IsEmpty() && strRight.IsEmpty())
    {
        left.m_pData = strLeft.m_pData;
        left.m_nLength = strLeft.m_nLength;
        sub_00636470();
        return 0;
    }

    if (strLeft.IsEmpty() && !strCenter.IsEmpty() && strRight.IsEmpty())
    {
        center.m_pData = strCenter.m_pData;
        center.m_nLength = strCenter.m_nLength;
        sub_00636470();
        return 0;
    }

    if (strLeft.IsEmpty() && strCenter.IsEmpty() && !strRight.IsEmpty())
    {
        right.m_pData = strRight.m_pData;
        right.m_nLength = strRight.m_nLength;
        sub_00636470();
        return 0;
    }

    return -1;
}
