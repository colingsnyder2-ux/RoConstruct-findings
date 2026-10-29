// roc 2009-12 00738470  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738470
//
// 00738470  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00738473  8b01                 mov eax, dword ptr [ecx]
// 00738475  8b10                 mov edx, dword ptr [eax]
// 00738477  ffe2                 jmp edx
// copied from an identical function in another client (function ?g@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD
struct I{virtual void f();}; struct S{char pad[0x20]; I* p; void g();};
void S::g(){p->f();}