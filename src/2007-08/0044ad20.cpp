// from server: 28% by colin
struct CRobloxCommandLineInfo {
    void ParseParam(void* pszParam, int bFlag, int bLast);
    void ParseParam2(void* pszParam, int bFlag, int bLast);
};

void CRobloxCommandLineInfo::ParseParam2(void* pszParam, int bFlag, int bLast)
{
    char local = 0;
    int result = 0;
    int (*callback)(void*, int, int) = 0;
    int callbackArg = 0;
    int callbackArg2 = 0;

    if (pszParam == 0)
    {
        callback = (int (*)(void*, int, int))pszParam;
        callbackArg = bFlag;
        callbackArg2 = bLast;
        result = callback(pszParam, bFlag, bLast);
    }

    ParseParam(pszParam, bFlag, bLast);

    if (pszParam != 0)
    {
        callback(pszParam, 1, callbackArg2);
    }
}
