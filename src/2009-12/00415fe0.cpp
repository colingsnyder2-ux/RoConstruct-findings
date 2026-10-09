// roc 2009-12 00415fe0  unit: PasteVerb  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00415fe0
//
// 00415fe0  56                   push esi
// 00415fe1  8bf1                 mov esi, ecx
// 00415fe3  8b06                 mov eax, dword ptr [esi]
// 00415fe5  85c0                 test eax, eax
// 00415fe7  741e                 je 0x416007
// 00415fe9  50                   push eax
// 00415fea  ff1540ba9800         call dword ptr [0x98ba40]
// 00415ff0  85c0                 test eax, eax
// 00415ff2  7c13                 jl 0x416007
// 00415ff4  8b06                 mov eax, dword ptr [esi]
// 00415ff6  50                   push eax
// 00415ff7  ff154cba9800         call dword ptr [0x98ba4c]
// 00415ffd  85c0                 test eax, eax
// 00415fff  7c06                 jl 0x416007
// 00416001  c70600000000         mov dword ptr [esi], 0
// 00416007  5e                   pop esi
// 00416008  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
