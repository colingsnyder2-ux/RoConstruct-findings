// from server: 44% by colin
struct CXTPCustomizeCommandsPage
{
    bool OnApply();
};

struct CString
{
    void* m_pData;
    CString();
    ~CString();
    CString& operator=(const char*);
};

struct CStringArray
{
    void* m_pData;
    CStringArray();
    ~CStringArray();
    int GetSize() const;
    CString& GetAt(int);
};

struct CMenu
{
    void* m_hMenu;
    CMenu();
    ~CMenu();
    bool Attach(void*);
    int GetMenuItemCount() const;
    CMenu* GetSubMenu(int);
    bool GetMenuString(int, CString&, unsigned int);
};

extern "C" void* __stdcall GetActiveWindow();
extern "C" int __stdcall GetMenuItemCount(void*);
extern "C" void* __stdcall GetSubMenu(void*, int);
extern "C" int __stdcall GetMenuStringA(void*, unsigned int, char*, int, unsigned int);
extern "C" int __stdcall lstrlenA(const char*);
extern "C" void* __stdcall GetModuleHandleA(const char*);

extern void* g_77ee04;
extern void* g_77edfc;
extern void* g_77ddac;
extern void* g_77ddbc;
extern void* g_77e160;
extern void* g_77d55c;
extern void* g_77dd98;

extern void* __cdecl sub_6B3010();
extern void __cdecl sub_63046C(void*);
extern void* __cdecl sub_6302F8(const char*);
extern void __cdecl sub_63D000(void*);
extern int __cdecl sub_738370(void*, int, int, int);
extern bool __cdecl sub_676ED0(CXTPCustomizeCommandsPage*, const char*);

bool CXTPCustomizeCommandsPage::OnApply()
{
    CStringArray arr;
    void* pWnd = sub_6B3010();
    void* pMenu = 0;
    if (!((bool (__thiscall*)(void*, void**, void*))((*(void***)pWnd)[2]))(pWnd, &pMenu, 0))
    {
        arr.~CStringArray();
        return false;
    }

    int count = GetMenuItemCount(pMenu);
    if (count > 0)
    {
        for (int i = 0; i < count; ++i)
        {
            char buf[1024];
            buf[0] = 1;
            if (sub_738370(buf, 0, 0, 0x400) > 0)
            {
                const char* pStr = (const char*)((void* (__stdcall*)(void*, int))g_77edfc)(pMenu, i);
                char* pCopy = (char*)sub_6302F8(pStr);
                if (pCopy)
                {
                    sub_63D000(buf);
                    if (((int (__stdcall*)(void*, int, int))g_77e160)(buf, 9, 0) > 0)
                    {
                        ((void (__stdcall*)(void*, int))g_77d55c)(buf, 0);
                    }
                    const char* pFinal = (const char*)((void* (__stdcall*)(void*, void*))g_77dd98)(buf, pCopy);
                    if (!sub_676ED0(this, pFinal))
                    {
                        ((void (__stdcall*)(void*))g_77ddbc)(buf);
                        arr.~CStringArray();
                        return false;
                    }
                }
            }
            ((void (__stdcall*)(void*))g_77ddbc)(buf);
        }
    }

    arr.~CStringArray();
    return true;
}
