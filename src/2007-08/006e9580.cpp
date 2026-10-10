// from server: 49% by colin
struct CXTPDockingPaneShortcutBar2003Theme {
    void RefreshMetrics();
};

extern "C" {
    unsigned long __stdcall GetDesktopWindow();
    int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);
    int __cdecl strcpy_s(char*, unsigned int, const char*);
    void* __cdecl memset(void*, int, unsigned int);
}

void CXTPDockingPaneShortcutBar2003Theme::RefreshMetrics()
{
    char buf[0x38];

    (*(void (__thiscall*)(void*))0x6e8180)(this);
    unsigned long hdc = GetDesktopWindow();
    (*(void (__thiscall*)(void*, unsigned long))0x7383ac)((void*)0, hdc);

    if (*(int*)((char*)this + 0x98) != 0)
    {
        *(int*)(buf + 0x1c) = 0x3c;
        memset(buf, 0, 0x38);
        SystemParametersInfoA(0x1f, 0x3c, buf, 0);
        strcpy_s(buf + 0x20, 0x20, "Arial");
        *(int*)(buf + 0x28) = 0x2bc;
        *(int*)(buf + 0x18) = 0x14;
        (*(void (__thiscall*)(void*, void*))0x6e5cf0)(this, buf);
    }

    if (*(int*)((char*)this + 0x1dc) != 0)
    {
        void* p = (*(void* (__cdecl*)())0x668f70)();
        (*(void (__thiscall*)(void*, void*))0x668510)((char*)this + 0x1e4, (char*)p + 0x20);
        *(int*)((char*)this + 0x228) = 0xffffff;
    }
    else
    {
        void* p = (*(void* (__cdecl*)())0x668f70)();
        float f = *(float*)0x797e9c;
        int a = (*(int (__thiscall*)(void*, int, float))0x6e54b0)(this, 0x10, f);
        int b = (*(int (__thiscall*)(void*, int, int))0x6e54b0)(this, 5, 0xcd);
        int c = (*(int (__thiscall*)(void*, int, int))0x6e54b0)(this, 0x10, b);
        int d = (*(int (__thiscall*)(void*, void*, int))0x6686d0)(p, (void*)c, a);
        (*(void (__thiscall*)(void*, int))0x6684f0)((char*)this + 0x1e4, d);
    }

    (*(void (__thiscall*)(void*))0x7383a6)((void*)0);
}
