// roc 2010-06 005ae610  unit: RBX::LegacyController::W4InputType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae610
//
// 005ae610  56                   push esi
// 005ae611  6a08                 push 8
// 005ae613  8bf1                 mov esi, ecx
// 005ae615  e886931f00           call 0x7a79a0
// 005ae61a  83c404               add esp, 4
// 005ae61d  85c0                 test eax, eax
// 005ae61f  740e                 je 0x5ae62f
// 005ae621  c70004aca200         mov dword ptr [eax], 0xa2ac04
// 005ae627  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ae62a  894804               mov dword ptr [eax + 4], ecx
// 005ae62d  5e                   pop esi
// 005ae62e  c3                   ret 
// 005ae62f  33c0                 xor eax, eax
// 005ae631  5e                   pop esi
// 005ae632  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
