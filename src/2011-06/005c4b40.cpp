// roc 2011-06 005c4b40  unit: RBX::Joint::W4JointType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4b40
//
// 005c4b40  56                   push esi
// 005c4b41  6a08                 push 8
// 005c4b43  8bf1                 mov esi, ecx
// 005c4b45  e814552400           call 0x80a05e
// 005c4b4a  83c404               add esp, 4
// 005c4b4d  85c0                 test eax, eax
// 005c4b4f  740e                 je 0x5c4b5f
// 005c4b51  c700a0eda800         mov dword ptr [eax], 0xa8eda0
// 005c4b57  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c4b5a  894804               mov dword ptr [eax + 4], ecx
// 005c4b5d  5e                   pop esi
// 005c4b5e  c3                   ret 
// 005c4b5f  33c0                 xor eax, eax
// 005c4b61  5e                   pop esi
// 005c4b62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
