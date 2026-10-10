// from server: 47% by colin
extern "C" {
    int __stdcall MultiByteToWideChar(unsigned int CodePage, unsigned long dwFlags,
        const char* lpMultiByteStr, int cbMultiByte, wchar_t* lpWideCharStr, int cchWideChar);
    int __stdcall lstrlenA(const char* lpString);
    void __cdecl free(void* mem);
    long __stdcall VarDateFromStr(wchar_t* strIn, unsigned long lcid, unsigned short wFlags, double* pdateOut);
}

extern unsigned int DAT_008b5188;
extern void* DAT_008bab64;
extern void* DAT_0077d2f4;
extern void* DAT_0077d318;
extern void* DAT_0077e6c4;
extern void* DAT_0077ea1c;
extern double DAT_00796590;

void __cdecl sub_00401150();
bool __cdecl sub_00402ac0(int);
void* __cdecl sub_004035e0(int);
void* __cdecl sub_00630bb0(int);
void __cdecl sub_00630a1e();
long long __cdecl sub_00630c50(int, int, int, int);

struct CXTPReportRecordItemVariant
{
    double m_value;
    int m_nType;
    bool SetValue(const char* str, unsigned long lcid, unsigned short wFlags);
};

bool CXTPReportRecordItemVariant::SetValue(const char* str, unsigned long lcid, unsigned short wFlags)
{
    unsigned int cookie = DAT_008b5188;
    void* (__stdcall *getLocale)() = (void* (__stdcall*)())DAT_008bab64;
    unsigned long locale = (unsigned long)getLocale();

    const char* src = str;
    if (src == 0)
        src = (const char*)0x785954;

    int len = lstrlenA(src);
    long long alloc = sub_00630c50(len + 1, 0, 2, 0);
    int size = (int)alloc;
    int hi = (int)(alloc >> 32);

    wchar_t* buf = 0;
    void* listHead = 0;

    if (hi == 0 && (unsigned int)(size + 0x80000000) <= 0xffffffffu)
    {
        if (size <= 0x400 && sub_00402ac0(size))
        {
            buf = (wchar_t*)sub_00630bb0(size);
        }
        else
        {
            buf = (wchar_t*)sub_004035e0(size);
            listHead = (void*)0;
        }
    }

    wchar_t* result = 0;
    if (buf != 0)
    {
        buf[0] = 0;
        int conv = MultiByteToWideChar(0, 0, src, -1, buf, size >> 1);
        result = conv ? buf : 0;
    }

    if (result == 0)
    {
        m_value = 0.0;
        m_nType = 1;
        if (listHead != 0)
        {
            void (__cdecl *freeFn)(void*) = (void (__cdecl*)(void*))DAT_0077e6c4;
            void* p = listHead;
            do
            {
                void* next = *(void**)p;
                freeFn(p);
                p = next;
            } while (p != 0);
        }
        return false;
    }

    double dateOut;
    long hr = VarDateFromStr(result, locale, wFlags, &dateOut);
    if (hr >= 0)
    {
        m_nType = 0;
        sub_00401150();
        return true;
    }

    m_nType = 1;
    if (hr == (long)0x80020005)
    {
        m_value = 0.0;
        sub_00401150();
        return false;
    }

    m_value = DAT_00796590;
    sub_00401150();
    return false;
}
