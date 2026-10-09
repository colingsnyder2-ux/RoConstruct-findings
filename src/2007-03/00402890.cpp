// roc 2007-03 00402890  unit: seg_00400000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402890
//
// 00402890  8b01                 mov eax, dword ptr [ecx]
// 00402892  50                   push eax
// 00402893  ff1530e97700         call dword ptr [0x77e930]
// 00402899  59                   pop ecx
// 0040289a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000015@@QAEXXZ)

namespace ns_ROCX000015 {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
