// from server: 0% by EspClaude
// from server: 62% by colin
// roc 2008-06 004533f0  unit: CRobloxDoc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004533f0
// 004533f0  55                   push ebp
extern "C" __declspec(dllimport) long __stdcall SHGetFolderPathA(void *, int, void *, unsigned long, char *);
extern "C" __declspec(dllimport) int __stdcall PathRelativePathToA(char *, const char *, unsigned long, const char *, unsigned long);

struct __declspec(dllimport) String
{
    char *data;
    String();
    ~String() throw();
    char *GetBuffer(int);
    void ReleaseBuffer(int = -1);
    String Left(int) const;
    int Compare(const char *) const;
};

struct CRobloxDoc
{
    bool CheckPath(const char *);
    bool Process(const String &);
    void Report(const char *);
};

bool CRobloxDoc::CheckPath(const char *path)
{
    char folder[260];
    if (SHGetFolderPathA(0, 32, 0, 0, folder) != 0)
        return false;

    String relative;
    char *buffer = relative.GetBuffer(260);
    int result = PathRelativePathToA(buffer, folder, 16, path, 0);
    relative.ReleaseBuffer();
    if (result)
    {
        bool up = relative.Left(2).Compare("..") == 0;
        if (up)
            return false;
    }
    try
    {
        return Process(relative);
    }
    catch (...)
    {
        Report(path);
        return false;
    }
}
