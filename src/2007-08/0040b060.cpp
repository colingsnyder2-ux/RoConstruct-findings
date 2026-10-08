// from server: 100% by colin
// roc 2007-08 0040b060  unit: CNullDoc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b060
//
// 0040b060  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040b066  8b08                 mov ecx, dword ptr [eax]
// 0040b068  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040b06b  50                   push eax
// 0040b06c  ffd2                 call edx
// 0040b06e  c3                   ret 

struct CNullDoc {
    char pad[0xec];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[8];
    fn(p);
}
