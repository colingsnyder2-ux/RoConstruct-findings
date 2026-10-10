// from server: 50% by colin
struct Log {
    void timeStamp(bool includeDate);
};

extern "C" {
    __declspec(dllimport) void* __stdcall GetProcessHeap();
    __declspec(dllimport) void* __stdcall GetCurrentThreadId();
    __declspec(dllimport) int __stdcall WideCharToMultiByte(unsigned int CodePage, unsigned long dwFlags, const wchar_t* lpWideCharStr, int cchWideChar, char* lpMultiByteStr, int cbMultiByte, const char* lpDefaultChar, int* lpUsedDefaultChar);
    __declspec(dllimport) long __stdcall CoCreateGuid(void* pguid);
    __declspec(dllimport) int __stdcall StringFromGUID2(const void* rguid, wchar_t* lpsz, int cchMax);
}

extern "C" void __stdcall sub_630B8C(void* dst, int val, unsigned int size);

void Log::timeStamp(bool includeDate)
{
    char buf[0x40];
    wchar_t wbuf[0x40];
    char guidBuf[0x40];
    wchar_t guidWide[0x40];
    unsigned char guid[16];

    sub_630B8C(buf, 0, 0x7e);
    *(unsigned short*)buf = 0;

    WideCharToMultiByte(0, 0, wbuf, 0x40, buf, 0x40, 0, 0);

    CoCreateGuid(guid);
    StringFromGUID2(guid, guidWide, 0x40);

    WideCharToMultiByte(0, 0, guidWide, 0x40, guidBuf, 0x40, 0, 0);

    (*(void(__thiscall**)(void*, const char*))0x77e660)(this, buf);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 0x28, 1);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 0x1b, 1);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 0x16, 1);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 0x11, 1);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 0xc, 1);
    (*(void(__thiscall**)(void*, int, int))0x77e640)(this, 3, 1);
}
