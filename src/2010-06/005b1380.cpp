// roc 2010-06 005b1380  unit: RBX::Handles::W4VisualStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1380
//
// 005b1380  56                   push esi
// 005b1381  6a08                 push 8
// 005b1383  8bf1                 mov esi, ecx
// 005b1385  e816661f00           call 0x7a79a0
// 005b138a  83c404               add esp, 4
// 005b138d  85c0                 test eax, eax
// 005b138f  740e                 je 0x5b139f
// 005b1391  c700d4aea200         mov dword ptr [eax], 0xa2aed4
// 005b1397  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b139a  894804               mov dword ptr [eax + 4], ecx
// 005b139d  5e                   pop esi
// 005b139e  c3                   ret 
// 005b139f  33c0                 xor eax, eax
// 005b13a1  5e                   pop esi
// 005b13a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
