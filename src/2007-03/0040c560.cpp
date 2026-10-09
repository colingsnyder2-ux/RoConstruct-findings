// roc 2007-03 0040c560  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c560
//
// 0040c560  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040c566  8b08                 mov ecx, dword ptr [eax]
// 0040c568  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0040c56b  50                   push eax
// 0040c56c  ffd2                 call edx
// 0040c56e  c3                   ret 
// copied from an identical function in another client (function ?method@CNullDoc@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
struct CNullDoc {
    char pad[0xec];
    void* field_ec;
    void method();
};

void CNullDoc::method() {
    void* p = field_ec;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x30 / 4];
    fn(p);
}
}
