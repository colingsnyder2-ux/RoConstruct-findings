// roc 2009-12 0078ac60  unit: RBX::UniversalTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078ac60
//
// 0078ac60  8b4904               mov ecx, dword ptr [ecx + 4]
// 0078ac63  85c9                 test ecx, ecx
// 0078ac65  7408                 je 0x78ac6f
// 0078ac67  8b01                 mov eax, dword ptr [ecx]
// 0078ac69  8b10                 mov edx, dword ptr [eax]
// 0078ac6b  6a01                 push 1
// 0078ac6d  ffd2                 call edx
// 0078ac6f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
struct S {
    void f();
};

void S::f() {
    int* p = *(int**)((char*)this + 4);
    if (p) {
        void** vt = (void**)*p;
        ((void (__thiscall*)(void*, int))vt[0])(p, 1);
    }
}
}
