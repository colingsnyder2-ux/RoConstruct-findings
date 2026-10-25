// from server: 100% by tester
// roc 2008-06 0040e930  unit: CBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e930
//
// 0040e930  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040e936  8b08                 mov ecx, dword ptr [eax]
// 0040e938  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0040e93b  50                   push eax
// 0040e93c  ffd2                 call edx
// 0040e93e  c3                   ret 

struct CNullDoc {
    char pad[0xf0];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x38 / 4];
    fn(p);
}