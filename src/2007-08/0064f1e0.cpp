// from server: 91% by colin
// roc 2007-08 0064f1e0  unit: CXTPToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f1e0
//
// 0064f1e0  56                   push esi
// 0064f1e1  57                   push edi
// 0064f1e2  8bf9                 mov edi, ecx
// 0064f1e4  e887ffffff           call 0x64f170
// 0064f1e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064f1ed  8bf0                 mov esi, eax
// 0064f1ef  8b06                 mov eax, dword ptr [esi]
// 0064f1f1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0064f1f7  51                   push ecx
// 0064f1f8  57                   push edi
// 0064f1f9  8bce                 mov ecx, esi
// 0064f1fb  ffd2                 call edx
// 0064f1fd  5f                   pop edi
// 0064f1fe  8bc6                 mov eax, esi
// 0064f200  5e                   pop esi
// 0064f201  c20400               ret 4

struct CXTPToolBar {
    void* sub_64F170();
    void* method_64F1E0(void* arg);
};

void* CXTPToolBar::method_64F1E0(void* arg) {
    void* p = sub_64F170();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0x1c8 / 4];
    fn(p, this, arg);
    return p;
}
