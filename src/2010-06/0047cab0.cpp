// roc 2010-06 0047cab0  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cab0
//
// 0047cab0  8b4104               mov eax, dword ptr [ecx + 4]
// 0047cab3  85c0                 test eax, eax
// 0047cab5  7408                 je 0x47cabf
// 0047cab7  8b08                 mov ecx, dword ptr [eax]
// 0047cab9  8b5108               mov edx, dword ptr [ecx + 8]
// 0047cabc  50                   push eax
// 0047cabd  ffd2                 call edx
// 0047cabf  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
