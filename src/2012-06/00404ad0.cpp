// roc 2012-06 00404ad0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404ad0
//
// 00404ad0  8b01                 mov eax, dword ptr [ecx]
// 00404ad2  50                   push eax
// 00404ad3  ff15c829b200         call dword ptr [0xb229c8]
// 00404ad9  59                   pop ecx
// 00404ada  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00005a@@QAEXXZ)

namespace ns_ROCX00005a {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
