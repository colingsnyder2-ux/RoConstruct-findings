// roc 2011-06 005c4080  unit: RBX::DataModelMesh::W4LODType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4080
//
// 005c4080  56                   push esi
// 005c4081  6a08                 push 8
// 005c4083  8bf1                 mov esi, ecx
// 005c4085  e8d45f2400           call 0x80a05e
// 005c408a  83c404               add esp, 4
// 005c408d  85c0                 test eax, eax
// 005c408f  740e                 je 0x5c409f
// 005c4091  c700e0eca800         mov dword ptr [eax], 0xa8ece0
// 005c4097  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c409a  894804               mov dword ptr [eax + 4], ecx
// 005c409d  5e                   pop esi
// 005c409e  c3                   ret 
// 005c409f  33c0                 xor eax, eax
// 005c40a1  5e                   pop esi
// 005c40a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
