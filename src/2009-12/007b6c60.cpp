// roc 2009-12 007b6c60  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b6c60
//
// 007b6c60  8b4908               mov ecx, dword ptr [ecx + 8]
// 007b6c63  8b01                 mov eax, dword ptr [ecx]
// 007b6c65  8b5008               mov edx, dword ptr [eax + 8]
// 007b6c68  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();virtual void v2();}; struct S{char pad[0x8]; B* p; void f();};
void S::f(){p->v2();}