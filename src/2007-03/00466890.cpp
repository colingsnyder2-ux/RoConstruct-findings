// roc 2007-03 00466890  unit: seg_00460000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00466890
//
// 00466890  8b4104               mov eax, dword ptr [ecx + 4]
// 00466893  85c0                 test eax, eax
// 00466895  7408                 je 0x46689f
// 00466897  8b08                 mov ecx, dword ptr [eax]
// 00466899  8b5108               mov edx, dword ptr [ecx + 8]
// 0046689c  50                   push eax
// 0046689d  ffd2                 call edx
// 0046689f  c3                   ret 
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
