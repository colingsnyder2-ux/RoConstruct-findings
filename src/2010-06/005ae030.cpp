// roc 2010-06 005ae030  unit: RBX::GuiText::W4YAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae030
//
// 005ae030  56                   push esi
// 005ae031  6a08                 push 8
// 005ae033  8bf1                 mov esi, ecx
// 005ae035  e866991f00           call 0x7a79a0
// 005ae03a  83c404               add esp, 4
// 005ae03d  85c0                 test eax, eax
// 005ae03f  740e                 je 0x5ae04f
// 005ae041  c700a4aba200         mov dword ptr [eax], 0xa2aba4
// 005ae047  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ae04a  894804               mov dword ptr [eax + 4], ecx
// 005ae04d  5e                   pop esi
// 005ae04e  c3                   ret 
// 005ae04f  33c0                 xor eax, eax
// 005ae051  5e                   pop esi
// 005ae052  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
