// from server: 100% by tester
// roc 2008-06 0040e7e0  unit: CBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e7e0
//
// 0040e7e0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040e7e6  8b08                 mov ecx, dword ptr [eax]
// 0040e7e8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040e7eb  50                   push eax
// 0040e7ec  ffd2                 call edx
// 0040e7ee  c3                   ret 

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