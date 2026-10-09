// roc 2009-06 0046dc70  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046dc70
//
// 0046dc70  8b4104               mov eax, dword ptr [ecx + 4]
// 0046dc73  85c0                 test eax, eax
// 0046dc75  7408                 je 0x46dc7f
// 0046dc77  8b08                 mov ecx, dword ptr [eax]
// 0046dc79  8b5108               mov edx, dword ptr [ecx + 8]
// 0046dc7c  50                   push eax
// 0046dc7d  ffd2                 call edx
// 0046dc7f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
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
