// from server: 100% by tester
// roc 2011-06 00412de0  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412de0
//
// 00412de0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00412de6  8b08                 mov ecx, dword ptr [eax]
// 00412de8  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00412deb  50                   push eax
// 00412dec  ffd2                 call edx
// 00412dee  c3                   ret 

struct CNullDoc {
    char pad[0xf0];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x30 / 4];
    fn(p);
}