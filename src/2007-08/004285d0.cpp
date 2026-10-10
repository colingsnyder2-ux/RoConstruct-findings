// from server: 26% by colin
struct COleException {
    char pad[0x14];
    unsigned long m_dwHelpContext;
    int ReportError(unsigned long, const char*, const char*, unsigned int);
};

extern "C" {
    int __stdcall FormatMessageA(unsigned long, const char*, unsigned long, unsigned long, char*, unsigned long, void*);
    void* __stdcall LocalAlloc(unsigned int, unsigned int);
    void* __stdcall LocalFree(void*);
    const char* __stdcall GetLastError();
}

extern "C" void* __stdcall __CxxThrowException(void*, void*);

void __stdcall sub_427C40(void*, int);

int COleException::ReportError(unsigned long dwHelpContext, const char* lpszClassName, const char* lpszWindowTitle, unsigned int nHelpContext)
{
    char buffer[0x10];
    unsigned long dwError;
    void* pMsg;

    dwError = (unsigned long)GetLastError();
    if (dwError != 0)
        return 0;

    pMsg = LocalAlloc(0x40, 0x200);
    if (pMsg == 0)
        return 0;

    FormatMessageA(0x1000, 0, dwError, 0x400, (char*)pMsg, 0x200, 0);

    if (this->m_dwHelpContext > 0)
    {
        sub_427C40(pMsg, 1);
    }
    else
    {
        sub_427C40(pMsg, 1);
    }

    LocalFree(pMsg);
    return 0;
}
