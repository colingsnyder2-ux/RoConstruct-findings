// from server: 44% by colin
extern "C" {
    __declspec(dllimport) int __stdcall MultiByteToWideChar(unsigned int CodePage, unsigned long dwFlags, const char* lpMultiByteStr, int cbMultiByte, wchar_t* lpWideCharStr, int cchWideChar);
    __declspec(dllimport) int __stdcall lstrlenA(const char* lpString);
}

extern "C" void* __cdecl sub_630BB0(int size);
extern "C" void __cdecl sub_6319A0(unsigned int hr);
extern "C" void __cdecl sub_630A1E();
extern "C" void* __cdecl sub_4017C0(void* dst, const char* src, int len, int a4);

struct CXTPPropExchangeArchive {
    void* m_pArchive;      // 0x40
    void* m_pArchive2;     // 0x44
    int sub_687090(char** ppOut, const char* psz);
};

int CXTPPropExchangeArchive::sub_687090(char** ppOut, const char* psz) {
    int hr = 0;
    void* pUnk = 0;
    void* pUnk2 = 0;
    char* pResult = 0;
    int len;
    int wlen;
    wchar_t* pWide;
    void* pArchive;
    void* pArchive2;
    int ret;

    *ppOut = 0;

    if (psz == 0) {
        pUnk = 0;
    } else {
        len = lstrlenA(psz);
        wlen = len + 1;
        if (wlen > 0x3fffffff) {
            pUnk = 0;
        } else {
            pWide = (wchar_t*)sub_630BB0(wlen * 2);
            if (pWide != 0) {
                *pWide = 0;
                if (MultiByteToWideChar(0, 0, psz, -1, pWide, wlen) == 0) {
                    pWide = 0;
                }
            }
            pUnk = pWide;
        }
    }

    if (this->m_pArchive2 == 0) {
        sub_6319A0(0x80004003);
    }
    pArchive2 = this->m_pArchive2;

    if (*ppOut != 0) {
        void* p = *ppOut;
        void** vtbl = *(void***)p;
        void (*release)(void*) = (void (*)(void*))vtbl[2];
        release(p);
    }

    *ppOut = 0;
    {
        void** vtbl = *(void***)pArchive2;
        int (__stdcall *fn)(void*, void*, char**) = (int (__stdcall *)(void*, void*, char**))vtbl[0x94/4];
        ret = fn(pArchive2, pUnk, ppOut);
    }

    if (ret >= 0 && *ppOut != 0) {
        goto done;
    }

    if (psz != 0) {
        len = lstrlenA(psz);
        wlen = len + 1;
        if (wlen > 0x3fffffff) {
            pUnk2 = 0;
        } else {
            pWide = (wchar_t*)sub_630BB0(wlen * 2);
            sub_4017C0(pWide, psz, wlen, 0);
            pUnk2 = pWide;
        }
    }

    if (this->m_pArchive == 0) {
        sub_6319A0(0x80004003);
    }
    pArchive = this->m_pArchive;

    if (pUnk2 != 0) {
        void** vtbl = *(void***)pUnk2;
        void (*release)(void*) = (void (*)(void*))vtbl[2];
        release(pUnk2);
    }

    pUnk2 = 0;
    {
        void** vtbl = *(void***)pArchive;
        int (__stdcall *fn)(void*, void*, void**) = (int (__stdcall *)(void*, void*, void**))vtbl[0xbc/4];
        fn(pArchive, pUnk2, &pUnk2);
    }

    if (pUnk2 != 0) {
        if (this->m_pArchive2 == 0) {
            sub_6319A0(0x80004003);
        }
        pArchive2 = this->m_pArchive2;

        if (*ppOut != 0) {
            void* p = *ppOut;
            void** vtbl = *(void***)p;
            void (*release)(void*) = (void (*)(void*))vtbl[2];
            release(p);
        }

        *ppOut = 0;
        {
            void** vtbl = *(void***)pArchive2;
            int (__stdcall *fn)(void*, void*, char**) = (int (__stdcall *)(void*, void*, char**))vtbl[0x54/4];
            fn(pArchive2, pUnk2, ppOut);
        }
    }

done:
    if (pUnk2 != 0) {
        void** vtbl = *(void***)pUnk2;
        void (*release)(void*) = (void (*)(void*))vtbl[2];
        release(pUnk2);
    }

    return (int)ppOut;
}
