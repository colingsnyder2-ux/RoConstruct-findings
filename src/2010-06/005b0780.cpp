// roc 2010-06 005b0780  unit: RBX::KeyframeSequence::W4Priority::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0780
//
// 005b0780  56                   push esi
// 005b0781  6a08                 push 8
// 005b0783  8bf1                 mov esi, ecx
// 005b0785  e816721f00           call 0x7a79a0
// 005b078a  83c404               add esp, 4
// 005b078d  85c0                 test eax, eax
// 005b078f  740e                 je 0x5b079f
// 005b0791  c70014aea200         mov dword ptr [eax], 0xa2ae14
// 005b0797  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b079a  894804               mov dword ptr [eax + 4], ecx
// 005b079d  5e                   pop esi
// 005b079e  c3                   ret 
// 005b079f  33c0                 xor eax, eax
// 005b07a1  5e                   pop esi
// 005b07a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
