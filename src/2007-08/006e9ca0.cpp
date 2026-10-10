// from server: 84% by colin
struct CXTPDockingPaneWhidbeyTheme {
    char pad[0x50];
    char field50[0x194];
    char field1e4[0x20];
    char field204[0x24];
    int field228;
    void RefreshMetrics();
};

extern float g_themeFloat;

extern "C" void __stdcall sub_6684f0(void*, unsigned int, unsigned int, float);
extern "C" void* __stdcall sub_668f70();
extern "C" int __stdcall sub_668d70(void*);
extern "C" int __stdcall sub_6e54b0(void*, int);
extern "C" void __stdcall sub_6e6f60(void*);

void CXTPDockingPaneWhidbeyTheme::RefreshMetrics()
{
    sub_6e6f60(this);
    field228 = sub_6e54b0(this, 0x13);

    void* p = sub_668f70();
    int mode = sub_668d70(p) - 1;

    if (mode == 0 || mode == 1)
    {
        sub_6684f0(field50, 0xd7e5e5, 0xe7f1f4, g_themeFloat);
        sub_6684f0(field1e4, 0xc6d7d8, 0xe5efee, g_themeFloat);
        field228 = 0;
    }
    else if (mode == 2)
    {
        sub_6684f0(field50, 0xe5d7d7, 0xf7f3f3, g_themeFloat);
        sub_6684f0(field1e4, 0xebe0e0, 0xf6f2f2, g_themeFloat);
        sub_6684f0(field204, 0xba9ea0, 0xebe1e0, g_themeFloat);
        field228 = 0;
    }
}
