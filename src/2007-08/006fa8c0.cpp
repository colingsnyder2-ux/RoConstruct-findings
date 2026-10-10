// from server: 40% by colin
struct CXTPPropertyGridOffice2003Theme {
    char pad0[0x34];
    void* field34;
    int field38;
    int field3c;
    int field40;
    void Refresh();
};

extern "C" void __stdcall sub_668f70();
extern "C" void __stdcall sub_668a50();
extern "C" void __stdcall sub_668d70();
extern "C" void __stdcall sub_6f9380();

void CXTPPropertyGridOffice2003Theme::Refresh()
{
    sub_6f9380();
    field40 = 0;
    sub_668f70();
    sub_668a50();
    if (*(int*)0 == 0) {
        sub_668f70();
        int v = *(int*)0;
        sub_668d70();
        int n = v - 1;
        if (n == 0) {
            void* p = field34;
            field38 = 0xfeecdd;
            field3c = 0xe0a47b;
            *(int*)((char*)p + 0x38) = 0xfeecdd;
            *(int*)((char*)field34 + 0x50) = 0xf0c7a9;
            *(int*)((char*)field34 + 0x68) = 0;
            field40 = 1;
            return;
        }
        n -= 1;
        if (n == 0) {
            void* p = field34;
            field38 = 0xe7f2f3;
            field3c = 0xb1bbbc;
            *(int*)((char*)p + 0x38) = 0xe7f2f3;
            *(int*)((char*)field34 + 0x50) = 0x9fd4c5;
            *(int*)((char*)field34 + 0x68) = 0;
            field40 = 1;
            return;
        }
        n -= 1;
        if (n != 0)
            return;
        void* p = field34;
        field38 = 0xf4eeee;
        field3c = 0xbba0a1;
        *(int*)((char*)p + 0x38) = 0xf4eeee;
        *(int*)((char*)field34 + 0x50) = 0xd3c0c0;
        *(int*)((char*)field34 + 0x68) = 0;
        field40 = 1;
    }
}
