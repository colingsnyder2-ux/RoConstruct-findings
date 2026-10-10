// from server: 40% by colin
extern "C" {
    int __stdcall lstrlenA(const char*);
    int __stdcall strcpy_s(char*, unsigned int, const char*);
    int __stdcall CreateErrorInfo(void**);
    int __stdcall SetErrorInfo(unsigned long, void*);
    int __stdcall LoadStringA(void*, unsigned int, char*, int);
    void __stdcall CoTaskMemFree(void*);
    int __stdcall ProgIDFromCLSID(const void*, char**);
}

extern "C" void* __stdcall sub_8BAB64();
extern "C" int __stdcall sub_77EDE4(void*, unsigned short, char*, unsigned int);
extern "C" int __stdcall sub_77E9A4(const char*, char*, unsigned int);
extern "C" int __stdcall sub_77D2F4(const char*);
extern "C" int __stdcall sub_77E9FC(void**);
extern "C" int __stdcall sub_77F014(void*, void**);
extern "C" void __stdcall sub_77F01C(void*);
extern "C" int __stdcall sub_77E9F8(unsigned int, void*);
extern "C" void __stdcall sub_77E6C4(void*);

extern "C" int __cdecl sub_4016E0(const char*, char*, unsigned int, const char*);
extern "C" int __cdecl sub_4017C0(void*, const char*, int, void*);
extern "C" int __cdecl sub_402AC0(unsigned int);
extern "C" int __cdecl sub_4035E0(void*, unsigned int);
extern "C" int __cdecl sub_630C50(int, int, int, int);
extern "C" int __cdecl sub_630BB0(int);
extern "C" int __cdecl sub_630A1E();
extern "C" int __cdecl sub_401150(void*);

extern "C" unsigned int __security_cookie;

struct COleException {
    int FormatError(unsigned short wCode, unsigned long dwHelpContext, void* pHelpFile, void* pProgID, void* pSource, void* pDescription, void* pHelpFile2);
};

int COleException::FormatError(unsigned short wCode, unsigned long dwHelpContext, void* pHelpFile, void* pProgID, void* pSource, void* pDescription, void* pHelpFile2)
{
    char buffer[0x400];
    void* pErrorInfo = 0;
    void* pErrorInfo2 = 0;
    int result = 0;
    int len;
    int hr;
    char* pStr;
    void* pList = 0;
    void* pNode;
    int i;

    buffer[0] = 0;
    pErrorInfo = sub_8BAB64();
    pErrorInfo2 = 0;
    pList = 0;

    if ((wCode & 0xffff0000) == 0) {
        if (sub_77EDE4(pHelpFile, wCode, buffer, 0x400) == 0) {
            sub_4016E0("Unknown Error", buffer, 0x400, (const char*)0x78A138);
        }
        len = sub_77D2F4(buffer) + 1;
        hr = sub_630C50(len, 0, 2, 0);
        if (hr < 0) {
            sub_401150(&pList);
            return 0x8007000E;
        }
        if (hr > 0x400 || !sub_402AC0(hr)) {
            sub_4035E0(&pList, hr);
            pNode = pList;
        } else {
            pNode = (void*)sub_630BB0(hr);
        }
        if (sub_4017C0(pNode, buffer, hr, pErrorInfo) == 0) {
            sub_401150(&pList);
            return 0x8007000E;
        }
        if (dwHelpContext == 0) {
            dwHelpContext = wCode | 0x80040000;
        }
    }

    if (sub_77E9FC(&pErrorInfo2) >= 0) {
        pList = 0;
        (*(int (__stdcall**)(void*, void*))(*(int*)pErrorInfo2 + 0xc))(pErrorInfo2, pProgID);
        sub_77F014(pSource, &pErrorInfo);
        if (pErrorInfo != 0) {
            (*(int (__stdcall**)(void*, void*))(*(int*)pErrorInfo2 + 0x10))(pErrorInfo2, pErrorInfo);
        }
        if (pDescription != 0 && pHelpFile2 != 0) {
            (*(int (__stdcall**)(void*, void*))(*(int*)pErrorInfo2 + 0x1c))(pErrorInfo2, pDescription);
            (*(int (__stdcall**)(void*, void*))(*(int*)pErrorInfo2 + 0x18))(pErrorInfo2, pHelpFile2);
        }
        sub_77F01C(pErrorInfo);
        (*(int (__stdcall**)(void*, int))(*(int*)pErrorInfo2 + 0x14))(pErrorInfo2, hr);
        if ((*(int (__stdcall**)(void*, const char*, void**))(*(int*)pErrorInfo2))(pErrorInfo2, (const char*)0x78A128, &pList) >= 0) {
            sub_77E9F8(0, pList);
        }
        if (pList != 0) {
            (*(int (__stdcall**)(void*))(*(int*)pList + 8))(pList);
        }
    }

    result = dwHelpContext;
    if (result == 0) {
        result = 0x80020009;
    }
    if (pErrorInfo2 != 0) {
        (*(int (__stdcall**)(void*))(*(int*)pErrorInfo2 + 8))(pErrorInfo2);
    }
    while (pNode != 0) {
        void* next = *(void**)pNode;
        sub_77E6C4(pNode);
        pNode = next;
    }
    return result;
}
