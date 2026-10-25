// from server: 100% by tester
// roc 2008-06 0040e920  unit: CBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e920
//
// 0040e920  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040e926  8b08                 mov ecx, dword ptr [eax]
// 0040e928  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0040e92b  50                   push eax
// 0040e92c  ffd2                 call edx
// 0040e92e  c3                   ret 

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