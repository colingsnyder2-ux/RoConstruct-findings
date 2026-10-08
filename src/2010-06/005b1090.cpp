// roc 2010-06 005b1090  unit: RBX::PyramidInstance::W4NumSidesEnum::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1090
//
// 005b1090  56                   push esi
// 005b1091  6a08                 push 8
// 005b1093  8bf1                 mov esi, ecx
// 005b1095  e806691f00           call 0x7a79a0
// 005b109a  83c404               add esp, 4
// 005b109d  85c0                 test eax, eax
// 005b109f  740e                 je 0x5b10af
// 005b10a1  c700a4aea200         mov dword ptr [eax], 0xa2aea4
// 005b10a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b10aa  894804               mov dword ptr [eax + 4], ecx
// 005b10ad  5e                   pop esi
// 005b10ae  c3                   ret 
// 005b10af  33c0                 xor eax, eax
// 005b10b1  5e                   pop esi
// 005b10b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
