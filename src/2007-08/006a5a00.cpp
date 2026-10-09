// from DeepSeek/server: 100% by colin
// roc 2007-08 006a5a00  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5a00
//
// 006a5a00  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a5a04  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a5a08  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 006a5a0e  6a01                 push 1
// 006a5a10  50                   push eax
// 006a5a11  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a5a15  52                   push edx
// 006a5a16  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a5a1a  50                   push eax
// 006a5a1b  52                   push edx
// 006a5a1c  e8bf77fdff           call 0x67d1e0
// 006a5a21  c21000               ret 0x10

struct CXTPMenuBar {
    char pad[0xf8];
    void* field_f8;
    int method(int, int, int, int);
};

struct Sub {
    int method(int, int, int, int, int);
};

int CXTPMenuBar::method(int a, int b, int c, int d) {
    return ((Sub*)field_f8)->method(a, b, c, d, 1);
}
