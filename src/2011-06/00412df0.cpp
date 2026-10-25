// from server: 100% by tester
// roc 2011-06 00412df0  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412df0
//
// 00412df0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00412df6  8b08                 mov ecx, dword ptr [eax]
// 00412df8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00412dfb  50                   push eax
// 00412dfc  ffd2                 call edx
// 00412dfe  c3                   ret 

struct CNullDoc {
    char pad[0xf0];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x20 / 4];
    fn(p);
}