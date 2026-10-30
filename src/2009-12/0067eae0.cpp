// roc 2009-12 0067eae0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067eae0
//
// 0067eae0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0067eae3  8b01                 mov eax, dword ptr [ecx]
// 0067eae5  8b5008               mov edx, dword ptr [eax + 8]
// 0067eae8  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();virtual void v2();}; struct S{char pad[0x1c]; B* p; void f();};
void S::f(){p->v2();}