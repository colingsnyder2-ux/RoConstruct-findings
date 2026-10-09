// roc 2009-12 007ec3e0  unit: W4_D3DDEVTYPE::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ec3e0
//
// 007ec3e0  56                   push esi
// 007ec3e1  6a08                 push 8
// 007ec3e3  8bf1                 mov esi, ecx
// 007ec3e5  e876740000           call 0x7f3860
// 007ec3ea  83c404               add esp, 4
// 007ec3ed  85c0                 test eax, eax
// 007ec3ef  740e                 je 0x7ec3ff
// 007ec3f1  c700fc049f00         mov dword ptr [eax], 0x9f04fc
// 007ec3f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ec3fa  894804               mov dword ptr [eax + 4], ecx
// 007ec3fd  5e                   pop esi
// 007ec3fe  c3                   ret 
// 007ec3ff  33c0                 xor eax, eax
// 007ec401  5e                   pop esi
// 007ec402  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
