// roc 2008-06 00415ea0  unit: CopyVerb  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415ea0
//
// 00415ea0  56                   push esi
// 00415ea1  8bf1                 mov esi, ecx
// 00415ea3  8b06                 mov eax, dword ptr [esi]
// 00415ea5  85c0                 test eax, eax
// 00415ea7  741e                 je 0x415ec7
// 00415ea9  50                   push eax
// 00415eaa  ff1510298000         call dword ptr [0x802910]
// 00415eb0  85c0                 test eax, eax
// 00415eb2  7c13                 jl 0x415ec7
// 00415eb4  8b06                 mov eax, dword ptr [esi]
// 00415eb6  50                   push eax
// 00415eb7  ff1504298000         call dword ptr [0x802904]
// 00415ebd  85c0                 test eax, eax
// 00415ebf  7c06                 jl 0x415ec7
// 00415ec1  c70600000000         mov dword ptr [esi], 0
// 00415ec7  5e                   pop esi
// 00415ec8  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
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
