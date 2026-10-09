// roc 2012-06 00405210  unit: VCApp::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405210
//
// 00405210  8b4104               mov eax, dword ptr [ecx + 4]
// 00405213  85c0                 test eax, eax
// 00405215  7408                 je 0x40521f
// 00405217  8b08                 mov ecx, dword ptr [eax]
// 00405219  8b5108               mov edx, dword ptr [ecx + 8]
// 0040521c  50                   push eax
// 0040521d  ffd2                 call edx
// 0040521f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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
