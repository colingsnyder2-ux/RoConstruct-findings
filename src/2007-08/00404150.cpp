// from server: 35% by colin
// roc 2007-08 00404150  unit: ATL::CRegObject  size: 465 bytes
// Reconstructed from the target machine code.

extern "C" {
    int __stdcall lstrlenA(const char*);
    char* __stdcall CharNextA(const char*);
    void __stdcall CoTaskMemFree(void*);
    void __stdcall _mbsnbcpy_s(char*, unsigned int, const char*, unsigned int);
}

// Minimal declarations for the internal helpers referenced by the target.
extern "C" int __cdecl sub_4016E0(char*, const char*, unsigned int, unsigned int, unsigned int);
extern "C" int __cdecl sub_401DC0(void*, unsigned int);
extern "C" int __cdecl sub_401E10(void*, const char*, unsigned int);
extern "C" int __cdecl sub_401FD0(const char*, int);
extern "C" int __cdecl sub_403F90(void*, const char*);
extern "C" int __cdecl sub_404110(void*, void*);

struct CRegObject {
    const char* m_str;
    void* m_pUnk;
    int Parse(const char* src, char** out);
};

int CRegObject::Parse(const char* src, char** out)
{
    if (src != 0 || out == 0)
        return (int)0x80004003;

    *out = 0;

    int len = lstrlenA(src);
    len += len;

    char* buf = 0;
    if (sub_401DC0(&buf, (unsigned int)len) != 0) {
        CoTaskMemFree(0);
        return (int)0x8007000E;
    }

    m_str = src;

    int result = 0;
    const char* p = src;
    if (*p != 0) {
        for (;;) {
            const char* cur = m_str;
            if (*cur == '%') {
                cur = CharNextA(cur);
                m_str = cur;
                if (*cur != '%') {
                    const char* end = CharNextA(cur);
                    int n = (int)(end - cur);
                    if (n > 0x1F) {
                        CoTaskMemFree(buf);
                        return (int)0x80004005;
                    }
                    char tmp[0x20];
                    sub_4016E0(tmp, cur, (unsigned int)n, 0x20, 0);
                    if (sub_404110(m_pUnk, tmp) == 0) {
                        CoTaskMemFree(buf);
                        return (int)0x80020009;
                    }
                    if (sub_403F90(&buf, tmp) == 0) {
                        CoTaskMemFree(buf);
                        return (int)0x8007000E;
                    }
                    if (m_str != end) {
                        const char* q = m_str;
                        do {
                            q = CharNextA(q);
                            m_str = q;
                        } while (q != end);
                    }
                    cur = m_str;
                    if (*cur == 0)
                        break;
                    continue;
                }
            }
            const char* end = CharNextA(cur);
            int n = (int)(end - cur);
            if (sub_401E10(&buf, cur, (unsigned int)n) == 0) {
                CoTaskMemFree(buf);
                return (int)0x8007000E;
            }
            cur = CharNextA(m_str);
            m_str = cur;
            if (*cur == 0)
                break;
        }
    }

    *out = buf;
    CoTaskMemFree(0);
    return result;
}
