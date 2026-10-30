// roc 2009-12 00719e00  unit: RBX::VPhysicsService::?$EventDesc  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719e00
//
// 00719e00  8b89d8000000         mov ecx, dword ptr [ecx + 0xd8]
// 00719e06  8b01                 mov eax, dword ptr [ecx]
// 00719e08  8b5008               mov edx, dword ptr [eax + 8]
// 00719e0b  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();virtual void v2();}; struct S{char pad[0xd8]; B* p; void f();};
void S::f(){p->v2();}