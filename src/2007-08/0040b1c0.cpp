// from server: 100% by colin
// roc 2007-08 0040b1c0  unit: CNullDoc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b1c0
//
// 0040b1c0  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040b1c6  8b08                 mov ecx, dword ptr [eax]
// 0040b1c8  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0040b1cb  50                   push eax
// 0040b1cc  ffd2                 call edx
// 0040b1ce  c3                   ret 

struct CNullDoc {
    char pad[0xec];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x38 / 4];
    fn(p);
}
