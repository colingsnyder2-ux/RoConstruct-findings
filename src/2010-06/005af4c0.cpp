// roc 2010-06 005af4c0  unit: RBX::Joint::W4JointType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af4c0
//
// 005af4c0  56                   push esi
// 005af4c1  6a08                 push 8
// 005af4c3  8bf1                 mov esi, ecx
// 005af4c5  e8d6841f00           call 0x7a79a0
// 005af4ca  83c404               add esp, 4
// 005af4cd  85c0                 test eax, eax
// 005af4cf  740e                 je 0x5af4df
// 005af4d1  c700f4aca200         mov dword ptr [eax], 0xa2acf4
// 005af4d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005af4da  894804               mov dword ptr [eax + 4], ecx
// 005af4dd  5e                   pop esi
// 005af4de  c3                   ret 
// 005af4df  33c0                 xor eax, eax
// 005af4e1  5e                   pop esi
// 005af4e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
