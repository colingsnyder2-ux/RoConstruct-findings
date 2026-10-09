// roc 2010-06 00415d20  unit: PasteVerb  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00415d20
//
// 00415d20  56                   push esi
// 00415d21  8bf1                 mov esi, ecx
// 00415d23  8b06                 mov eax, dword ptr [esi]
// 00415d25  85c0                 test eax, eax
// 00415d27  741e                 je 0x415d47
// 00415d29  50                   push eax
// 00415d2a  ff1570aa9e00         call dword ptr [0x9eaa70]
// 00415d30  85c0                 test eax, eax
// 00415d32  7c13                 jl 0x415d47
// 00415d34  8b06                 mov eax, dword ptr [esi]
// 00415d36  50                   push eax
// 00415d37  ff157caa9e00         call dword ptr [0x9eaa7c]
// 00415d3d  85c0                 test eax, eax
// 00415d3f  7c06                 jl 0x415d47
// 00415d41  c70600000000         mov dword ptr [esi], 0
// 00415d47  5e                   pop esi
// 00415d48  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
extern "C" {
    long (__stdcall *SafeArrayDestroy)(void*);
    long (__stdcall *SafeArrayUnlock)(void*);
}

struct S {
    void* p;
    void f();
};

void S::f() {
    if (p != 0) {
        if (SafeArrayDestroy(p) >= 0) {
            if (SafeArrayUnlock(p) >= 0) {
                p = 0;
            }
        }
    }
}
}
