// from server: 37% by colin
struct CXTPRichRender_XTextHost {
    void construct();
};

extern "C" {
    void __stdcall GetSystemTimeAsFileTime(void*);
    void* __stdcall GetDC(void*);
    int __stdcall ReleaseDC(void*, void*);
    int __stdcall GetDeviceCaps(void*, int);
    int __stdcall GetSysColor(int);
    int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);
    int __stdcall MulDiv(int, int, int);
    int __stdcall MultiByteToWideChar(unsigned int, unsigned int, const char*, int, wchar_t*, int);
    int __stdcall lstrlenA(const char*);
    void* __stdcall LoadLibraryA(const char*);
    void* __stdcall GetProcAddress(void*, const char*);
    int __cdecl wcsncpy_s(wchar_t*, unsigned int, const wchar_t*, unsigned int);
    void* __stdcall CreateTextServices(void*, void*, void**);
}

void CXTPRichRender_XTextHost::construct()
{
    char* base = (char*)this;
    *(void**)(base + 0x00) = (void*)0x7de374;
    *(void**)(base + 0x20) = (void*)0x7de3d4;

    void* dc = GetDC(0);
    *(void**)(base + 0x18) = dc;

    char buf[0x154];
    *(int*)buf = 0x154;
    SystemParametersInfoA(0x29, 0x154, buf, 0);

    void* hmod = LoadLibraryA("RICHED20.dll");
    *(int*)(base + 0x28) = 0x5c;
    *(int*)(base + 0x2c) = 0xe800000f;

    int caps = GetDeviceCaps(*(void**)(base + 0x18), 0x5a);
    *(int*)(base + 0x34) = -MulDiv(caps, 0x5a0, 0x5a);

    *(int*)(base + 0x3c) = GetSysColor(0x12);
    *(unsigned char*)(base + 0x41) = 0;

    wchar_t wbuf[0x100];
    int len = lstrlenA(buf) + 1;
    wchar_t* wptr = 0;
    if (len <= 0x3fffffff) {
        wptr = (wchar_t*)0;
        MultiByteToWideChar(0, 0, buf, -1, wbuf, 0x100);
        wptr = wbuf;
    }
    wcsncpy_s((wchar_t*)(base + 0x42), 0x20, wptr, 0x20);

    ReleaseDC(0, dc);

    *(int*)(base + 0x84) = 0x9c;
    *(int*)(base + 0x88) = 0x8001003f;
    *(unsigned short*)(base + 0x9c) = 1;
    *(void**)(base + 0x24) = 0;

    void* p = LoadLibraryA("RICHED20.dll");
    *(void**)(base + 0x120) = p;
    if (p) {
        void* fn = GetProcAddress(p, "CreateTextServices");
        if (fn) {
            void* out = 0;
            int hr = ((int (__stdcall*)(void*, void*, void**))fn)(0, (void*)(base + 0x20), &out);
            if (hr >= 0) {
                void** vt = *(void***)out;
                ((void (__stdcall*)(void*, void*, void*))vt[0])(out, (void*)0x7de344, (void*)(base + 0x24));
                void** vt2 = *(void***)out;
                ((void (__stdcall*)(void*))vt2[2])(out);
            }
        }
    }
}
