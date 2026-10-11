// from server: 22% by atomic.potato
struct CXTPDockingPaneMiniWnd
{
    char pad_00[0x18];
    int field_18;
    char pad_1c[0x1c];
    void* field_38;
    void SetActive(int, int);
};

extern "C" void __stdcall sub_008c3b80(void*, int);

void CXTPDockingPaneMiniWnd::SetActive(int a, int b)
{
    if (field_18 == a)
    {
        void* p = (int)(this - 0xf8) < 0 ? this : 0;
        sub_008c3b80(p, b);
    }
    else if (field_38 != 0)
    {
        char* p = (char*)field_38;
        void (__stdcall *fn)(char*, int, int) = *(void (__stdcall **)(char*, int, int))(p + 0x20);
        fn(p + 0x20, a, b);
    }
}
