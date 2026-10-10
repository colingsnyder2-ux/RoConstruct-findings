// from server: 47% by tester
struct CXTPDockingPaneShortcutBar2003Theme {
    void RefreshMetrics();
};

extern "C" {
    unsigned long __stdcall GetDesktopWindow();
    int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);
    int __cdecl strcpy_s(char*, unsigned int, const char*);
}

void CXTPDockingPaneShortcutBar2003Theme::RefreshMetrics()
{
    char buf[0x38];
    char buf2[0x20];
    int tmp[8];

    (*(void (__thiscall**)(void*))0x7652f0)(this);
    GetDesktopWindow();
    (*(void (__cdecl*)(void*))0x6a0bde)(0);
    (*(void (__thiscall*)(void*, void*))0x7bc01c)(tmp, 0);

    if (*(int*)((char*)this + 0x98) != 0)
    {
        *(int*)(buf + 0) = 0x3c;
        (*(void (__cdecl*)(void*, int, void*))0x6a1704)(buf, 0, (void*)0x38);
        SystemParametersInfoA(0x1f, 0x3c, buf, 0);
        strcpy_s(buf2, 0x20, (const char*)0x85a4cc);
        *(int*)(buf2 + 0x14) = 0x2bc;
        (*(void (__thiscall*)(void*, void*, int))0x762e50)(this, buf2, 0);
    }

    if (*(int*)((char*)this + 0x1ec) != 0)
    {
        (*(void (__thiscall*)(void*, void*))0x6df2a0)((char*)this + 0x1f4, (void*)((*(int (__cdecl*)())0x6dfd40)() + 0x20));
        *(int*)((char*)this + 0x238) = 0xffffff;
    }
    else
    {
        int v = (*(int (__cdecl*)())0x6dfd40)();
        float f = *(float*)0x819bac;
        int a = (*(int (__thiscall*)(void*, int, float))0x7625d0)(this, 0x10, f);
        int b = (*(int (__thiscall*)(void*, int, int))0x7625d0)(this, 5, 0xcd);
        int c = (*(int (__thiscall*)(void*, int, int))0x7625d0)(this, 0x10, b);
        int d = (*(int (__thiscall*)(void*, int, int))0x6df470)((void*)v, c, a);
        (*(void (__thiscall*)(void*, int))0x6df280)((char*)this + 0x1f4, d);
    }

    (*(void (__thiscall*)(void*))0x7bc016)(tmp);
}
