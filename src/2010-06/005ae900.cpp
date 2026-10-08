// roc 2010-06 005ae900  unit: RBX::DataModelMesh::W4LODType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae900
//
// 005ae900  56                   push esi
// 005ae901  6a08                 push 8
// 005ae903  8bf1                 mov esi, ecx
// 005ae905  e896901f00           call 0x7a79a0
// 005ae90a  83c404               add esp, 4
// 005ae90d  85c0                 test eax, eax
// 005ae90f  740e                 je 0x5ae91f
// 005ae911  c70034aca200         mov dword ptr [eax], 0xa2ac34
// 005ae917  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ae91a  894804               mov dword ptr [eax + 4], ecx
// 005ae91d  5e                   pop esi
// 005ae91e  c3                   ret 
// 005ae91f  33c0                 xor eax, eax
// 005ae921  5e                   pop esi
// 005ae922  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
