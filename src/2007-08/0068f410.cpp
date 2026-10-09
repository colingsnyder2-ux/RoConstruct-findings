// from server: 64% by colin
// roc 2007-08 0068f410  unit: CXTPDockingPane  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f410

extern "C" int __stdcall GetTempPathA(unsigned int nBufferLength, char* lpBuffer);
extern "C" unsigned int __stdcall GetTempFileNameA(const char* lpPathName, const char* lpPrefixString, unsigned int uUnique, char* lpTempFileName);
extern "C" unsigned int __stdcall GetCurrentDirectoryA(unsigned int nBufferLength, char* lpBuffer);

struct CXTPDockingPane
{
    char pad[0xc0];
    char m_szPath[0x104];
    char* GetTempFileName(char* pszBuffer);
};

char* CXTPDockingPane::GetTempFileName(char* pszBuffer)
{
    char* p = m_szPath;
    m_szPath[0] = 0;
    unsigned int n = GetTempPathA(0xa, p);
    if (n == (unsigned int)-1)
    {
        GetCurrentDirectoryA(0x104, pszBuffer);
        return pszBuffer;
    }
    GetTempFileNameA(p, "xtp", 0, pszBuffer);
    return pszBuffer;
}
