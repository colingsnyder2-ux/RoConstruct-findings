// from server: 100% by colin
// roc 2007-08 006b7f90  unit: XTPPaintThemes::CXTPDefaultTheme  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7f90
//
// 006b7f90  837c241802           cmp dword ptr [esp + 0x18], 2
// 006b7f95  7522                 jne 0x6b7fb9
// 006b7f97  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006b7f9c  7436                 je 0x6b7fd4
// 006b7f9e  837c240400           cmp dword ptr [esp + 4], 0
// 006b7fa3  b80e000000           mov eax, 0xe
// 006b7fa8  752f                 jne 0x6b7fd9
// 006b7faa  8b813c040000         mov eax, dword ptr [ecx + 0x43c]
// 006b7fb0  50                   push eax
// 006b7fb1  e8ba4df8ff           call 0x63cd70
// 006b7fb6  c21c00               ret 0x1c
// 006b7fb9  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 006b7fbe  7508                 jne 0x6b7fc8
// 006b7fc0  8b813c040000         mov eax, dword ptr [ecx + 0x43c]
// 006b7fc6  eb05                 jmp 0x6b7fcd
// 006b7fc8  b812000000           mov eax, 0x12
// 006b7fcd  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006b7fd2  7505                 jne 0x6b7fd9
// 006b7fd4  b811000000           mov eax, 0x11
// 006b7fd9  50                   push eax
// 006b7fda  e8914df8ff           call 0x63cd70
// 006b7fdf  c21c00               ret 0x1c

struct CXTPDefaultTheme {
    int sub_63CD70(int);
    int method(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

int CXTPDefaultTheme::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int result;
    if (a6 == 2) {
        if (a3 == 0) {
            result = 0x11;
        } else {
            result = 0xe;
            if (a1 == 0) {
                result = *(int*)((char*)this + 0x43c);
            }
        }
    } else {
        if (a7 == 5) {
            result = *(int*)((char*)this + 0x43c);
        } else {
            result = 0x12;
        }
        if (a3 == 0) {
            result = 0x11;
        }
    }
    return sub_63CD70(result);
}
