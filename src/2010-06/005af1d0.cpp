// roc 2010-06 005af1d0  unit: RBX::Feature::W4TopBottom::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af1d0
//
// 005af1d0  56                   push esi
// 005af1d1  6a08                 push 8
// 005af1d3  8bf1                 mov esi, ecx
// 005af1d5  e8c6871f00           call 0x7a79a0
// 005af1da  83c404               add esp, 4
// 005af1dd  85c0                 test eax, eax
// 005af1df  740e                 je 0x5af1ef
// 005af1e1  c700c4aca200         mov dword ptr [eax], 0xa2acc4
// 005af1e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005af1ea  894804               mov dword ptr [eax + 4], ecx
// 005af1ed  5e                   pop esi
// 005af1ee  c3                   ret 
// 005af1ef  33c0                 xor eax, eax
// 005af1f1  5e                   pop esi
// 005af1f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
