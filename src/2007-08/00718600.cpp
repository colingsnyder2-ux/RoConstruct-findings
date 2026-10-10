// from server: 34% by colin
struct CString {
    void* m_pData;
    CString();
    CString(const CString&);
    ~CString();
    CString& operator=(const CString&);
};

struct CXTPRibbonControlTab {
    char pad0[0x158];
    void* m_pSomething;
    int OnUnderlineActivate(int, int, int, int, int);
};

extern "C" void __stdcall sub_62FF38(void*, int);
extern "C" void __stdcall sub_62FF3E(CString*, int);
extern "C" int __stdcall sub_63B420(CXTPRibbonControlTab*, int, int, int, int, int);
extern "C" int __stdcall sub_6713D0(CXTPRibbonControlTab*, int*);
extern "C" void __stdcall sub_6FE810(void*, int);

int CXTPRibbonControlTab::OnUnderlineActivate(int a1, int a2, int a3, int a4, int a5)
{
    CString str;
    int local;
    int result;

    sub_62FF3E(&str, *(int*)((char*)this - 4));

    local = 0;
    if (sub_6713D0(this, &local) == 0)
    {
        result = sub_63B420(this, local, a1, a2, a3, a4);
    }
    else
    {
        sub_6FE810((char*)this + 0x158, local - 1);
        result = 0;
    }

    if (str.m_pData)
    {
        sub_62FF38(str.m_pData, 0);
    }
    return result;
}
