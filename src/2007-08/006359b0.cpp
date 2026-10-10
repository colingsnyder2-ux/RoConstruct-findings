// from server: 59% by colin
struct CXTPCommandBarsOptions
{
    void* m_pData;
    char m_buf[4];
    int m_nType;
    CXTPCommandBarsOptions* Init();
};

extern "C" void* __stdcall LoadLibraryA(const char*);
extern "C" void* __stdcall GetProcAddress(void*, const char*);

void* g_77ddac;
void* g_77dd6c;
void* g_77d27c;

CXTPCommandBarsOptions* CXTPCommandBarsOptions::Init()
{
    void* p;
    void* q;
    void* r;

    q = g_77ddac;
    ((void (__stdcall*)(void*))q)(&m_buf[0]);

    r = g_77d27c;
    m_nType = 0;
    p = ((void* (__stdcall*)(const char*))r)("RICHEDIT");
    m_pData = p;
    m_nType = 1;
    if (p != 0)
    {
        ((void (__stdcall*)(void*, const char*))g_77dd6c)(&m_buf[0], "RICHED32.DLL");
        return this;
    }
    p = ((void* (__stdcall*)(const char*))r)("RICHED20.DLL");
    m_pData = p;
    ((void (__stdcall*)(void*, const char*))g_77dd6c)(&m_buf[0], "RichEdit20A");
    m_nType = 0;
    return this;
}
