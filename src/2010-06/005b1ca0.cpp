// roc 2010-06 005b1ca0  unit: RBX::SpecialShape::W4MeshType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1ca0
//
// 005b1ca0  56                   push esi
// 005b1ca1  6a08                 push 8
// 005b1ca3  8bf1                 mov esi, ecx
// 005b1ca5  e8f65c1f00           call 0x7a79a0
// 005b1caa  83c404               add esp, 4
// 005b1cad  85c0                 test eax, eax
// 005b1caf  740e                 je 0x5b1cbf
// 005b1cb1  c70064afa200         mov dword ptr [eax], 0xa2af64
// 005b1cb7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b1cba  894804               mov dword ptr [eax + 4], ecx
// 005b1cbd  5e                   pop esi
// 005b1cbe  c3                   ret 
// 005b1cbf  33c0                 xor eax, eax
// 005b1cc1  5e                   pop esi
// 005b1cc2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
