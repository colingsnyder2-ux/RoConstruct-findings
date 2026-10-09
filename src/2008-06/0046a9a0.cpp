// roc 2008-06 0046a9a0  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a9a0
//
// 0046a9a0  8b4104               mov eax, dword ptr [ecx + 4]
// 0046a9a3  85c0                 test eax, eax
// 0046a9a5  7408                 je 0x46a9af
// 0046a9a7  8b08                 mov ecx, dword ptr [eax]
// 0046a9a9  8b5108               mov edx, dword ptr [ecx + 8]
// 0046a9ac  50                   push eax
// 0046a9ad  ffd2                 call edx
// 0046a9af  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
struct S {
    void f();
};

void S::f()
{
    void* p = *(void**)((char*)this + 4);
    if (p) {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
        fn(p);
    }
}
}
