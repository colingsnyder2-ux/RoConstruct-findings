// from server: 70% by colin
// roc 2007-08 00693ce0  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693ce0
//
// 00693ce0  8b442408             mov eax, dword ptr [esp + 8]
// 00693ce4  50                   push eax
// 00693ce5  81c128010000         add ecx, 0x128
// 00693ceb  ff156cdd7700         call dword ptr [0x77dd6c]
// 00693cf1  33c0                 xor eax, eax
// 00693cf3  c20800               ret 8

struct CXTPStatusBar
{
    char pad[0x128];
    int field_0x128;
    int method(int, int);
};

extern "C" int __stdcall helper_77dd6c(int);

int CXTPStatusBar::method(int a, int b)
{
    helper_77dd6c(b);
    return 0;
}
