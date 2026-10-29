// roc 2009-12 00681140  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681140
//
// 00681140  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00681143  8b01                 mov eax, dword ptr [ecx]
// 00681145  8b5004               mov edx, dword ptr [eax + 4]
// 00681148  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();}; struct S{char pad[0x1c]; B* p; void f();};
void S::f(){p->v1();}