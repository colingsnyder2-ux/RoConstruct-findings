// from server: 93% by colin
struct CMainFrame {
    int OnCreate(void* lpCreateStruct);
};

extern "C" int __stdcall sub_6304fc(void*);
extern "C" void __stdcall sub_62ff02();
extern "C" int __stdcall sub_630478(int, int, int);
extern "C" int __stdcall sub_6304f6(int, int, int, int);
extern "C" void* __stdcall LoadIconA(void*, const char*);

int CMainFrame::OnCreate(void* lpCreateStruct)
{
    if (sub_6304fc(lpCreateStruct) == 0)
        return 0;
    sub_62ff02();
    void* h = LoadIconA((void*)sub_630478(0x80, 0xe, 0x80), (const char*)0);
    *(int*)((char*)lpCreateStruct + 0x28) = sub_6304f6((int)h, 0, 0, 0);
    return 1;
}
