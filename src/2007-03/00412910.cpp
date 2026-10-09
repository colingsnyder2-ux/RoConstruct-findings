// roc 2007-03 00412910  unit: seg_00410000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412910
//
// 00412910  56                   push esi
// 00412911  8bf1                 mov esi, ecx
// 00412913  8b06                 mov eax, dword ptr [esi]
// 00412915  85c0                 test eax, eax
// 00412917  741e                 je 0x412937
// 00412919  50                   push eax
// 0041291a  ff15bcea7700         call dword ptr [0x77eabc]
// 00412920  85c0                 test eax, eax
// 00412922  7c13                 jl 0x412937
// 00412924  8b06                 mov eax, dword ptr [esi]
// 00412926  50                   push eax
// 00412927  ff15c8ea7700         call dword ptr [0x77eac8]
// 0041292d  85c0                 test eax, eax
// 0041292f  7c06                 jl 0x412937
// 00412931  c70600000000         mov dword ptr [esi], 0
// 00412937  5e                   pop esi
// 00412938  c3                   ret 
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
