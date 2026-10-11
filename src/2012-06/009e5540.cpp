// from server: 39% by atomic.potato
extern "C" void* __cdecl fn_009ee250();
extern "C" void __cdecl fn_00a99b06(int);

extern "C" void* __stdcall fn_00b23b78(void*);

struct CXTSplitterWnd {
    void __cdecl method(int);
};

void CXTSplitterWnd::method(int a)
{
    if (a == 1)
        goto L5584;
    if (a >= 0x65 && a <= 0x73)
        goto L5584;
    if (a == 2)
        goto L556f;
    if (a >= 0xc9 && a <= 0xd7)
        goto L556f;
    fn_00a99b06(a);
    return;
L556f:
    {
        char* p = (char*)fn_009ee250();
        int v = *(int*)(p + 0xb4);
        fn_00b23b78((void*)v);
    }
    return;
L5584:
    {
        char* p = (char*)fn_009ee250();
        int v = *(int*)(p + 0xb8);
        fn_00b23b78((void*)v);
    }
}
