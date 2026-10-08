// from server: 100% by auto
// roc 2011-06 0067a0b0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067a0b0
//
// 0067a0b0  8bc1                 mov eax, ecx
// 0067a0b2  33c9                 xor ecx, ecx
// 0067a0b4  894804               mov dword ptr [eax + 4], ecx
// 0067a0b7  894808               mov dword ptr [eax + 8], ecx
// 0067a0ba  89480c               mov dword ptr [eax + 0xc], ecx
// 0067a0bd  894810               mov dword ptr [eax + 0x10], ecx
// 0067a0c0  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
