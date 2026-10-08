// roc 2011-06 005c8c00  unit: RBX::CharacterMesh::W4BodyPart::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8c00
//
// 005c8c00  56                   push esi
// 005c8c01  6a08                 push 8
// 005c8c03  8bf1                 mov esi, ecx
// 005c8c05  e854142400           call 0x80a05e
// 005c8c0a  83c404               add esp, 4
// 005c8c0d  85c0                 test eax, eax
// 005c8c0f  740e                 je 0x5c8c1f
// 005c8c11  c700f0f1a800         mov dword ptr [eax], 0xa8f1f0
// 005c8c17  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c8c1a  894804               mov dword ptr [eax + 4], ecx
// 005c8c1d  5e                   pop esi
// 005c8c1e  c3                   ret 
// 005c8c1f  33c0                 xor eax, eax
// 005c8c21  5e                   pop esi
// 005c8c22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
