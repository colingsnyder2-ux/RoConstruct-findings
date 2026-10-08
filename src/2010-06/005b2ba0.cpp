// roc 2010-06 005b2ba0  unit: RBX::CharacterMesh::W4BodyPart::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2ba0
//
// 005b2ba0  56                   push esi
// 005b2ba1  6a08                 push 8
// 005b2ba3  8bf1                 mov esi, ecx
// 005b2ba5  e8f64d1f00           call 0x7a79a0
// 005b2baa  83c404               add esp, 4
// 005b2bad  85c0                 test eax, eax
// 005b2baf  740e                 je 0x5b2bbf
// 005b2bb1  c70054b0a200         mov dword ptr [eax], 0xa2b054
// 005b2bb7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b2bba  894804               mov dword ptr [eax + 4], ecx
// 005b2bbd  5e                   pop esi
// 005b2bbe  c3                   ret 
// 005b2bbf  33c0                 xor eax, eax
// 005b2bc1  5e                   pop esi
// 005b2bc2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
