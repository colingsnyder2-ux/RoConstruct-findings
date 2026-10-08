// from server: 54% by colin
// roc 2007-08 00644250  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644250
//
// 00644250  83b9bc00000000       cmp dword ptr [ecx + 0xbc], 0
// 00644257  7518                 jne 0x644271
// 00644259  e822f7ffff           call 0x643980
// 0064425e  8bc8                 mov ecx, eax
// 00644260  e89bf6feff           call 0x633900
// 00644265  83780400             cmp dword ptr [eax + 4], 0
// 00644269  7e06                 jle 0x644271
// 0064426b  b801000000           mov eax, 1
// 00644270  c3                   ret 
// 00644271  33c0                 xor eax, eax
// 00644273  c3                   ret 

struct CXTPCommandBar {
    char pad[0xbc];
    int field_0xbc;
    int isEnabled();
};

extern "C" int __stdcall sub_643980();
extern "C" int __stdcall sub_633900(int);

int CXTPCommandBar::isEnabled() {
    if (field_0xbc == 0)
        return 0;
    int result = sub_643980();
    int v = sub_633900(result);
    if (*(int*)(v + 4) > 0)
        return 1;
    return 0;
}
