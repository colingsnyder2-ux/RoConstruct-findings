// from server: 68% by colin
// roc 2007-08 006a8070  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8070
//
// 006a8070  53                   push ebx
// 006a8071  8bc1                 mov eax, ecx
// 006a8073  8b8864020000         mov ecx, dword ptr [eax + 0x264]
// 006a8079  8b9178010000         mov edx, dword ptr [ecx + 0x178]
// 006a807f  8b4020               mov eax, dword ptr [eax + 0x20]
// 006a8082  8b5254               mov edx, dword ptr [edx + 0x54]
// 006a8085  33db                 xor ebx, ebx
// 006a8087  81c178010000         add ecx, 0x178
// 006a808d  395c2408             cmp dword ptr [esp + 8], ebx
// 006a8091  0f95c3               setne bl
// 006a8094  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 006a8098  53                   push ebx
// 006a8099  50                   push eax
// 006a809a  ffd2                 call edx
// 006a809c  5b                   pop ebx
// 006a809d  c20400               ret 4

struct CXTPRibbonBar {
    char pad[0x20];
    void* field20;
    char pad2[0x264 - 0x24];
    void* field264;
    void method(int);
};

void CXTPRibbonBar::method(int arg) {
    void* p = field264;
    void** vtbl = *(void***)((char*)p + 0x178);
    void* f20 = field20;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[0x54/4];
    int flag = (arg != 0) ? 1 : 0;
    fn((char*)p + 0x178, f20, flag + flag + 0x25);
}
