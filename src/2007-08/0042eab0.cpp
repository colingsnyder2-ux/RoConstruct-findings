// from server: 78% by colin
// roc 2007-08 0042eab0  unit: CMainFrame  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042eab0
//
// 0042eab0  56                   push esi
// 0042eab1  8b742408             mov esi, dword ptr [esp + 8]
// 0042eab5  56                   push esi
// 0042eab6  e8411a2000           call 0x6304fc
// 0042eabb  85c0                 test eax, eax
// 0042eabd  7504                 jne 0x42eac3
// 0042eabf  5e                   pop esi
// 0042eac0  c20400               ret 4
// 0042eac3  e83a142000           call 0x62ff02
// 0042eac8  6880000000           push 0x80
// 0042eacd  6a0e                 push 0xe
// 0042eacf  6880000000           push 0x80
// 0042ead4  e89f192000           call 0x630478
// 0042ead9  50                   push eax
// 0042eada  ff15d0ed7700         call dword ptr [0x77edd0]
// 0042eae0  50                   push eax
// 0042eae1  6a00                 push 0
// 0042eae3  6a00                 push 0
// 0042eae5  6a00                 push 0
// 0042eae7  e80a1a2000           call 0x6304f6
// 0042eaec  894628               mov dword ptr [esi + 0x28], eax
// 0042eaef  b801000000           mov eax, 1
// 0042eaf4  5e                   pop esi
// 0042eaf5  c20400               ret 4

struct CMainFrame {
    int field_0x28;
    int OnCreate(void* lpCreateStruct);
};

extern "C" int __stdcall sub_6304fc(void*);
extern "C" int __stdcall sub_62ff02();
extern "C" int __stdcall sub_630478(int, int, int);
extern "C" int __stdcall sub_6304f6(int, int, int, int);
extern "C" void* __stdcall LoadIconA(void*, const char*);

int CMainFrame::OnCreate(void* lpCreateStruct)
{
    if (sub_6304fc(lpCreateStruct) == 0)
        return 0;
    sub_62ff02();
    void* hIcon = LoadIconA((void*)sub_630478(0x80, 0xe, 0x80), (const char*)0);
    field_0x28 = sub_6304f6((int)hIcon, 0, 0, 0);
    return 1;
}
