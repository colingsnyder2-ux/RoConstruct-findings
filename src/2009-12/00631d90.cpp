// roc 2009-12 00631d90  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631d90
//
// 00631d90  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00631d93  8b01                 mov eax, dword ptr [ecx]
// 00631d95  8b5008               mov edx, dword ptr [eax + 8]
// 00631d98  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();virtual void v2();}; struct S{char pad[0x20]; B* p; void f();};
void S::f(){p->v2();}