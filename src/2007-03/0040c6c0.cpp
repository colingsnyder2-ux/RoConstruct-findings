// roc 2007-03 0040c6c0  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c6c0
//
// 0040c6c0  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040c6c6  8b08                 mov ecx, dword ptr [eax]
// 0040c6c8  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0040c6cb  50                   push eax
// 0040c6cc  ffd2                 call edx
// 0040c6ce  c3                   ret 
// copied from an identical function in another client (function ?method@CNullDoc@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
struct CNullDoc {
    char pad[0xec];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x1c / 4];
    fn(p);
}
}
