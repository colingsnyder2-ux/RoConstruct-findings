// from server: 100% by tester
// roc 2011-06 00412e00  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412e00
//
// 00412e00  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00412e06  8b08                 mov ecx, dword ptr [eax]
// 00412e08  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00412e0b  50                   push eax
// 00412e0c  ffd2                 call edx
// 00412e0e  c3                   ret 

struct CNullDoc {
    char pad[0xf0];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x1c / 4];
    fn(p);
}