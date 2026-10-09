// roc 2007-03 0040c570  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c570
//
// 0040c570  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040c576  8b08                 mov ecx, dword ptr [eax]
// 0040c578  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040c57b  50                   push eax
// 0040c57c  ffd2                 call edx
// 0040c57e  c3                   ret 
// copied from an identical function in another client (function ?method@CNullDoc@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
}
