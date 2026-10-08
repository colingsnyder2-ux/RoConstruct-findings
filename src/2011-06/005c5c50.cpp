// roc 2011-06 005c5c50  unit: RBX::DataModel::W4Genre::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5c50
//
// 005c5c50  56                   push esi
// 005c5c51  6a08                 push 8
// 005c5c53  8bf1                 mov esi, ecx
// 005c5c55  e804442400           call 0x80a05e
// 005c5c5a  83c404               add esp, 4
// 005c5c5d  85c0                 test eax, eax
// 005c5c5f  740e                 je 0x5c5c6f
// 005c5c61  c700c0eea800         mov dword ptr [eax], 0xa8eec0
// 005c5c67  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c5c6a  894804               mov dword ptr [eax + 4], ecx
// 005c5c6d  5e                   pop esi
// 005c5c6e  c3                   ret 
// 005c5c6f  33c0                 xor eax, eax
// 005c5c71  5e                   pop esi
// 005c5c72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
