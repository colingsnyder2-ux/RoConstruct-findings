// roc 2009-12 0064c7d0  unit: RBX::Legacy::W4SurfaceConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064c7d0
//
// 0064c7d0  56                   push esi
// 0064c7d1  6a08                 push 8
// 0064c7d3  8bf1                 mov esi, ecx
// 0064c7d5  e886701a00           call 0x7f3860
// 0064c7da  83c404               add esp, 4
// 0064c7dd  85c0                 test eax, eax
// 0064c7df  740e                 je 0x64c7ef
// 0064c7e1  c700bccd9c00         mov dword ptr [eax], 0x9ccdbc
// 0064c7e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c7ea  894804               mov dword ptr [eax + 4], ecx
// 0064c7ed  5e                   pop esi
// 0064c7ee  c3                   ret 
// 0064c7ef  33c0                 xor eax, eax
// 0064c7f1  5e                   pop esi
// 0064c7f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
