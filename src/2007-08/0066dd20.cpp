// from server: 48% by colin
struct CString
{
    void* m_pData;
    CString();
    CString(const char*);
    ~CString();
    const char* GetBuffer();
    int GetLength();
};

struct CPoint
{
    int x;
    int y;
};

struct CWinApp
{
    static CWinApp* GetApp();
    void* GetProfileString(const char* section, const char* entry, const char* def, CString& result);
};

extern "C" {
    void __stdcall memcpy_s_impl(void*, unsigned int, const void*, unsigned int);
}

struct CXTPControls
{
    bool SetWindowPos(int x, int y);
};

bool CXTPControls::SetWindowPos(int x, int y)
{
    CString strSection;
    CString strEntry;
    CString strDefault;
    CString strValue;
    CPoint pt;
    bool bResult = false;

    strSection = CString("Settings");
    strEntry = CString("Window Position");
    strDefault = CString("");

    CWinApp::GetApp()->GetProfileString(strSection.GetBuffer(), strEntry.GetBuffer(), strDefault.GetBuffer(), strValue);

    if (strValue.GetLength() != 0x2c)
    {
        memcpy_s_impl(&pt, 0x2c, strValue.GetBuffer(), 0x2c);
        bResult = true;
    }

    strValue.~CString();
    strDefault.~CString();
    strEntry.~CString();
    strSection.~CString();

    return bResult;
}
