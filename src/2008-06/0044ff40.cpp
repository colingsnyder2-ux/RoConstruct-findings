// from server: 45% by colin
extern "C" {
    int __stdcall SHGetFolderPathA(void*, unsigned long, void*, unsigned long, char*);
    int __stdcall ShellExecuteA(void*, const char*, const char*, const char*, const char*, int);
}

struct CString {
    char buf[0x1c];
    CString();
    CString(const char*);
    ~CString();
    operator const char*() const;
};

struct CStringArray {
    void* data;
    void Add(const CString&);
};

extern CStringArray g_strArray;
extern CStringArray g_strArray2;

struct CRobloxDoc {
    void OpenCommonDocumentFolder();
};

void CRobloxDoc::OpenCommonDocumentFolder()
{
    char path[0x104];
    if (SHGetFolderPathA(0, 0x2e, 0, 0, path) != 0)
    {
        CString s("Unable to get common document folder");
        g_strArray.Add(s);
    }

    CString open("open");
    CString folder;
    g_strArray2.Add(folder);

    int result = ShellExecuteA(0, "open", path, 0, 0, 5);
    if ((unsigned)result <= 0x20)
    {
        CString msg2("ShellExecute failed");
        g_strArray.Add(msg2);
    }
}
