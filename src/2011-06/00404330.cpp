// roc 2011-06 00404330  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404330
//
// 00404330  8b01                 mov eax, dword ptr [ecx]
// 00404332  50                   push eax
// 00404333  ff15740aa400         call dword ptr [0xa40a74]
// 00404339  59                   pop ecx
// 0040433a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000037@@QAEXXZ)

namespace ns_ROCX000037 {
extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
}
