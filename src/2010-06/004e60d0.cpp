// roc 2010-06 004e60d0  unit: RBX::VFaces::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e60d0
//
// 004e60d0  56                   push esi
// 004e60d1  6a08                 push 8
// 004e60d3  8bf1                 mov esi, ecx
// 004e60d5  e8c6182c00           call 0x7a79a0
// 004e60da  83c404               add esp, 4
// 004e60dd  85c0                 test eax, eax
// 004e60df  740e                 je 0x4e60ef
// 004e60e1  c70098b0a100         mov dword ptr [eax], 0xa1b098
// 004e60e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e60ea  894804               mov dword ptr [eax + 4], ecx
// 004e60ed  5e                   pop esi
// 004e60ee  c3                   ret 
// 004e60ef  33c0                 xor eax, eax
// 004e60f1  5e                   pop esi
// 004e60f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
