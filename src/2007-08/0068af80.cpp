// from server: 48% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

struct CString {
    void* m_pData;
    CString();
    CString(const CString&);
    ~CString();
    CString& operator=(const CString&);
};

struct CStringArray {
    void* m_pData;
    CStringArray();
    ~CStringArray();
    int GetSize() const;
    CString& operator[](int);
    void Add(const CString&);
};

struct CXTPTabClientWnd {
    char pad[0x58];
    CString m_strCaption;
    int m_nID;
    int GetActiveTabIndex();
    void SetActiveTab(int);
    CString* GetTabCaption(int);
    void OnTabChanged(int);
    int GetTabCount();
    void SetTabText(int, const CString&);
    void UpdateTabs();
};

extern void func_006fd170();
extern void func_006fd120();
extern void func_006301c0();
extern void func_00630304();
extern void func_00630202();

extern "C" {
    __declspec(dllimport) void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

void CXTPTabClientWnd::UpdateTabs()
{
    CString strCaption;
    CStringArray arrTabs;
    int nIndex;
    int nCount;
    int nActive;
    CString* pCaption;
    void* hWnd;

    nActive = GetActiveTabIndex();
    if (nActive == -1)
    {
        return;
    }

    nCount = GetTabCount();
    for (nIndex = 0; nIndex < nCount; nIndex++)
    {
        pCaption = GetTabCaption(nIndex);
        if (pCaption != 0)
        {
            hWnd = (void*)SendMessageA(*(void**)((char*)this + 0x20), 0x286b, (unsigned int)this, 0);
            if (hWnd != 0)
            {
                CString* pText = (CString*)((char*)hWnd + 0x24);
                arrTabs.Add(*pText);
            }
        }
    }

    SetTabText(nActive, strCaption);
}
