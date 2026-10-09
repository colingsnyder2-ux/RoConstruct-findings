// roc 2011-06 004182f0  unit: VCRbxObject::?$CComObjectNoLock  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004182f0
//
// 004182f0  56                   push esi
// 004182f1  8bf1                 mov esi, ecx
// 004182f3  8b06                 mov eax, dword ptr [esi]
// 004182f5  85c0                 test eax, eax
// 004182f7  741e                 je 0x418317
// 004182f9  50                   push eax
// 004182fa  ff15cc0aa400         call dword ptr [0xa40acc]
// 00418300  85c0                 test eax, eax
// 00418302  7c13                 jl 0x418317
// 00418304  8b06                 mov eax, dword ptr [esi]
// 00418306  50                   push eax
// 00418307  ff15c00aa400         call dword ptr [0xa40ac0]
// 0041830d  85c0                 test eax, eax
// 0041830f  7c06                 jl 0x418317
// 00418311  c70600000000         mov dword ptr [esi], 0
// 00418317  5e                   pop esi
// 00418318  c3                   ret 
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
