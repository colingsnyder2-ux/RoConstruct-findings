// from server: 86% by colin
// roc 2007-08 00632e50  unit: CXTPCommandBarsContextMenus  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632e50
//
// 00632e50  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00632e53  56                   push esi
// 00632e54  8b742408             mov esi, dword ptr [esp + 8]
// 00632e58  83c124               add ecx, 0x24
// 00632e5b  56                   push esi
// 00632e5c  50                   push eax
// 00632e5d  e8aefa0900           call 0x6d2910
// 00632e62  c7860002000001000000 mov dword ptr [esi + 0x200], 1
// 00632e6c  8bc6                 mov eax, esi
// 00632e6e  5e                   pop esi
// 00632e6f  c20400               ret 4

struct CXTPCommandBarsContextMenus {
    char pad[0x24];
    int field_24;
    char pad2[0x4];
    int field_2c;
    void sub_6D2910(int, void*);
    void* func(void*);
};

void* CXTPCommandBarsContextMenus::func(void* arg) {
    int v = field_2c;
    sub_6D2910(v, arg);
    *(int*)((char*)arg + 0x200) = 1;
    return arg;
}
