// from server: 25% by colin
extern "C" {
    int __stdcall GetModuleFileNameA(void*, char*, unsigned long);
    char* __stdcall strstr(const char*, const char*);
    int __cdecl _stricmp(const char*, const char*);
    void* __cdecl memset(void*, int, unsigned long);
    void __cdecl _wcslwr_s(wchar_t*, unsigned long);
    wchar_t* __cdecl wcsstr(const wchar_t*, const wchar_t*);
}

struct CXTTreeBase {
    int field_0x160;
    int sub_668930(int);
    int sub_668A70();
};

struct CStr {
    char buf[0x104];
};

struct CWStr {
    wchar_t buf[0x104];
};

struct CMap {
    void* vtable;
    int sub_69E7A0();
    int sub_69ECB0();
    int sub_69F160();
    int sub_69E940(char*, char*, char*, char*, char*, char*);
};

int CXTTreeBase::sub_668A70()
{
    CMap map;
    CStr s1;
    CStr s2;
    CStr s3;
    CWStr w1;
    CWStr w2;
    CWStr w3;
    int result;

    map.sub_69E7A0();
    int r = map.sub_69ECB0();
    map.sub_69F160();
    if (r == 0)
        return 0;

    if (this->sub_668930(0) != 0)
        return 0;

    memset(&s1, 0, 0x104);
    memset(&s2, 0, 0x104);
    memset(&s3, 0, 0x104);

    map.sub_69E7A0();
    map.sub_69E940(s1.buf, s2.buf, s3.buf, s1.buf, s2.buf, s3.buf);
    map.sub_69F160();

    GetModuleFileNameA(0, s1.buf, 0x104);
    if (strstr(s1.buf, "\\") == 0) {
        GetModuleFileNameA(0, s1.buf, 0x104);
        if (strstr(s1.buf, "/") == 0)
            goto check_field;
    }

    GetModuleFileNameA(0, s1.buf, 0x104);
    _wcslwr_s((wchar_t*)s1.buf, 0x104);
    if (wcsstr((wchar_t*)s1.buf, L"vb") != 0)
        return 1;

    GetModuleFileNameA(0, s1.buf, 0x104);
    _wcslwr_s((wchar_t*)s1.buf, 0x104);
    if (wcsstr((wchar_t*)s1.buf, L"vb") != 0)
        return 2;

    GetModuleFileNameA(0, s1.buf, 0x104);
    _wcslwr_s((wchar_t*)s1.buf, 0x104);
    if (wcsstr((wchar_t*)s1.buf, L"vb") != 0)
        return 3;

check_field:
    if (this->field_0x160 == 0)
        return 0;

    GetModuleFileNameA(0, s1.buf, 0x104);
    if (strstr(s1.buf, "\\") != 0)
        return 1;

    GetModuleFileNameA(0, s1.buf, 0x104);
    if (strstr(s1.buf, "/") != 0)
        return 1;

    return 0;
}
