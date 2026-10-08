// roc 2010-06 00448420  unit: RBX::CRenderSettings::W4ShadowMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00448420
//
// 00448420  56                   push esi
// 00448421  6a08                 push 8
// 00448423  8bf1                 mov esi, ecx
// 00448425  e876f53500           call 0x7a79a0
// 0044842a  83c404               add esp, 4
// 0044842d  85c0                 test eax, eax
// 0044842f  740e                 je 0x44843f
// 00448431  c700f0b1a000         mov dword ptr [eax], 0xa0b1f0
// 00448437  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044843a  894804               mov dword ptr [eax + 4], ecx
// 0044843d  5e                   pop esi
// 0044843e  c3                   ret 
// 0044843f  33c0                 xor eax, eax
// 00448441  5e                   pop esi
// 00448442  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
