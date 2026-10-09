// roc 2007-03 0040c6d0  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c6d0
//
// 0040c6d0  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040c6d6  8b08                 mov ecx, dword ptr [eax]
// 0040c6d8  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0040c6db  50                   push eax
// 0040c6dc  ffd2                 call edx
// 0040c6de  c3                   ret 
// copied from an identical function in another client (function ?method@CNullDoc@ns_ROCX000010@@QAEXXZ)

namespace ns_ROCX000010 {
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
}
