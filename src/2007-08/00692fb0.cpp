// from server: 59% by colin
struct CXTPStatusBar {
    int sub_00692D00(int);
    int* sub_00692C60(int);
    int f(int, int);
};

extern "C" int __stdcall GetWindowTextLengthA(void*);
extern "C" int __stdcall GetWindowTextA(void*, char*, int);
extern "C" int __stdcall memcpy_s(void*, unsigned int, const void*, unsigned int);

int CXTPStatusBar::f(int a, int b)
{
    if (a == 0)
        return 0;

    int n = sub_00692D00(0);
    if (n >= 0) {
        int* p = sub_00692C60(n);
        char* dst = (char*)p + 0x30;
        int len = GetWindowTextLengthA(dst);
        if (len > b)
            len = b - 1;
        char* src = (char*)GetWindowTextA(dst, 0, 0);
        memcpy_s((void*)a, len, src, len);
        *(char*)(a + len) = 0;
        return len + 1;
    }

    *(char*)(a + n) = 0;
    return n + 1;
}
