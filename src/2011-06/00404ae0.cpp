// roc 2011-06 00404ae0  unit: ATL::CRegObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404ae0
//
// 00404ae0  8b4104               mov eax, dword ptr [ecx + 4]
// 00404ae3  85c0                 test eax, eax
// 00404ae5  7408                 je 0x404aef
// 00404ae7  8b08                 mov ecx, dword ptr [eax]
// 00404ae9  8b5108               mov edx, dword ptr [ecx + 8]
// 00404aec  50                   push eax
// 00404aed  ffd2                 call edx
// 00404aef  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
