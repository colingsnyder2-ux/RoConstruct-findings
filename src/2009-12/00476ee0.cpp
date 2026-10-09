// roc 2009-12 00476ee0  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00476ee0
//
// 00476ee0  8b4104               mov eax, dword ptr [ecx + 4]
// 00476ee3  85c0                 test eax, eax
// 00476ee5  7408                 je 0x476eef
// 00476ee7  8b08                 mov ecx, dword ptr [eax]
// 00476ee9  8b5108               mov edx, dword ptr [ecx + 8]
// 00476eec  50                   push eax
// 00476eed  ffd2                 call edx
// 00476eef  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
