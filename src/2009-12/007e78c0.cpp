// roc 2009-12 007e78c0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e78c0
//
// 007e78c0  8b09                 mov ecx, dword ptr [ecx]
// 007e78c2  51                   push ecx
// 007e78c3  ff1528b29800         call dword ptr [0x98b228]
// 007e78c9  85c0                 test eax, eax
// 007e78cb  7505                 jne 0x7e78d2
// 007e78cd  e9aeffffff           jmp 0x7e7880
// 007e78d2  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
// from server: 100% by why2
extern "C" __declspec(dllimport) int __stdcall SetEvent(void*);

struct S {
    void* field0;
    void f();
};

void S::f() {
    void* h = field0;
    if (SetEvent(h) == 0) {
        extern void g();
        g();
    }
}
}
