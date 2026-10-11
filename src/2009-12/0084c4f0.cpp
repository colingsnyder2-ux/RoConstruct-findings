// from server: 13% by atomic.potato
struct CString
{
    char* m_pData;
    int m_nLength;
};

struct CStringArray
{
    CString* m_pData;
    int m_nSize;
};

extern "C" void __stdcall CString_ctor(CString* self, const char* src);
extern "C" void __stdcall CString_dtor(CString* self);
extern "C" int __stdcall CString_IsEmpty(CString* self);
extern "C" int __stdcall func_7f9b20(int a, int b, int c, int d, int e, int f, int g, int h);

int __stdcall func_0084c4f0(
    const char* a1,
    const char* a2,
    const char* a3,
    CStringArray* a4,
    CStringArray* a5,
    CStringArray* a6)
{
    CString s1;
    CString s2;
    CString s3;

    CString_ctor(&s1, a1);
    CString_ctor(&s2, a2);
    CString_ctor(&s3, a3);

    a4->m_pData = 0;
    a4->m_nSize = 0;
    a5->m_pData = 0;
    a5->m_nSize = 0;
    a6->m_pData = 0;
    a6->m_nSize = 0;

    if (!CString_IsEmpty(&s1) && CString_IsEmpty(&s2) && CString_IsEmpty(&s3))
    {
        a4->m_pData = (CString*)s1.m_pData;
        int r = func_7f9b20(0x410, (int)&s1, (int)s1.m_pData, 0, 0, 0x7d00, 0, 0);
        a4->m_nSize = r;
        CString_dtor(&s3);
        CString_dtor(&s2);
        CString_dtor(&s1);
        return r;
    }

    if (CString_IsEmpty(&s1) && !CString_IsEmpty(&s2) && CString_IsEmpty(&s3))
    {
        a5->m_pData = (CString*)s2.m_pData;
        int r = func_7f9b20(0x411, (int)&s2, (int)s2.m_pData, 0, 0, 0x7d00, 0, 0);
        a5->m_nSize = r;
        CString_dtor(&s3);
        CString_dtor(&s2);
        CString_dtor(&s1);
        return r;
    }

    if (CString_IsEmpty(&s1) && CString_IsEmpty(&s2) && !CString_IsEmpty(&s3))
    {
        a6->m_pData = (CString*)s3.m_pData;
        int r = func_7f9b20(0x412, (int)&s3, (int)s3.m_pData, 0, 0, 0x7d00, 0, 0);
        a6->m_nSize = r;
        CString_dtor(&s3);
        CString_dtor(&s2);
        CString_dtor(&s1);
        return r;
    }

    CString_dtor(&s3);
    CString_dtor(&s2);
    CString_dtor(&s1);
    return -1;
}
