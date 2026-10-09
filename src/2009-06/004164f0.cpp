// roc 2009-06 004164f0  unit: CopyVerb  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004164f0
//
// 004164f0  56                   push esi
// 004164f1  8bf1                 mov esi, ecx
// 004164f3  8b06                 mov eax, dword ptr [esi]
// 004164f5  85c0                 test eax, eax
// 004164f7  741e                 je 0x416517
// 004164f9  50                   push eax
// 004164fa  ff151cea8900         call dword ptr [0x89ea1c]
// 00416500  85c0                 test eax, eax
// 00416502  7c13                 jl 0x416517
// 00416504  8b06                 mov eax, dword ptr [esi]
// 00416506  50                   push eax
// 00416507  ff15dce98900         call dword ptr [0x89e9dc]
// 0041650d  85c0                 test eax, eax
// 0041650f  7c06                 jl 0x416517
// 00416511  c70600000000         mov dword ptr [esi], 0
// 00416517  5e                   pop esi
// 00416518  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
