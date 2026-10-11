// from server: 79% by colin
// roc 2008-06 0042e500  unit: CMainFrame  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e500
//
// 0042e500  56                   push esi
// 0042e501  8b742408             mov esi, dword ptr [esp + 8]
// 0042e505  56                   push esi
// 0042e506  e8872a2700           call 0x6a0f92
// 0042e50b  85c0                 test eax, eax
// 0042e50d  7504                 jne 0x42e513
// 0042e50f  5e                   pop esi
// 0042e510  c20400               ret 4
// 0042e513  e80e242700           call 0x6a0926
// 0042e518  6880000000           push 0x80
// 0042e51d  6a0e                 push 0xe
// 0042e51f  6880000000           push 0x80
// 0042e524  e8032a2700           call 0x6a0f2c
// 0042e529  50                   push eax
// 0042e52a  ff15642d8000         call dword ptr [0x802d64]
// 0042e530  50                   push eax
// 0042e531  6a00                 push 0
// 0042e533  6a00                 push 0
// 0042e535  6a00                 push 0
// 0042e537  e8502a2700           call 0x6a0f8c
// 0042e53c  894628               mov dword ptr [esi + 0x28], eax
// 0042e53f  b801000000           mov eax, 1
// 0042e544  5e                   pop esi
// 0042e545  c20400               ret 4

struct CMainFrame {
    int field0x28;
    int OnCreate(void* lpCreateStruct);
};

extern "C" void* __stdcall sub_6A0F92(void*);
extern "C" void __stdcall sub_6A0926();
extern "C" void* __stdcall sub_6A0F2C(int, int, int);
extern "C" void* __stdcall sub_6A0F8C(int, int, int, void*);
extern "C" void* __stdcall LoadIconA(void*, const char*);

int CMainFrame::OnCreate(void* lpCreateStruct)
{
    if (sub_6A0F92(lpCreateStruct) == 0)
        return 0;
    sub_6A0926();
    void* h = sub_6A0F2C(0x80, 0xe, 0x80);
    void* icon = LoadIconA(h, (const char*)0);
    field0x28 = (int)sub_6A0F8C(0, 0, 0, icon);
    return 1;
}
