// from server: 57% by king_originala
extern "C" long __stdcall SHGetFolderPathA(void *, int, void *, unsigned long, char *);
extern "C" int __stdcall PathRelativePathToA(char *, const char *, unsigned long, const char *, unsigned long);

struct String
{
    char *data;
    String();
    ~String();
    char *GetBuffer(int);
    void ReleaseBuffer(int = -1);
    String Left(int) const;
    int Compare(const char *) const;
};

struct CRobloxDoc
{
    bool CheckPath(const char *);
};

bool CRobloxDoc::CheckPath(const char *path)
{
    try
    {
        char folder[260];
        if (SHGetFolderPathA(0, 32, 0, 0, folder) != 0)
            return false;

        String relative;
        int result = PathRelativePathToA(relative.GetBuffer(260),
                                        folder, 16, path, 0);
        relative.ReleaseBuffer();
        if (result && relative.Left(2).Compare("..") == 0)
            return false;
        return result != 0;
    }
    catch (...)
    {
        return false;
    }
}
