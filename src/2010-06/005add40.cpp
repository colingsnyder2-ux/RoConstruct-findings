// roc 2010-06 005add40  unit: RBX::GuiText::W4XAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005add40
//
// 005add40  56                   push esi
// 005add41  6a08                 push 8
// 005add43  8bf1                 mov esi, ecx
// 005add45  e8569c1f00           call 0x7a79a0
// 005add4a  83c404               add esp, 4
// 005add4d  85c0                 test eax, eax
// 005add4f  740e                 je 0x5add5f
// 005add51  c70074aba200         mov dword ptr [eax], 0xa2ab74
// 005add57  8b4e04               mov ecx, dword ptr [esi + 4]
// 005add5a  894804               mov dword ptr [eax + 4], ecx
// 005add5d  5e                   pop esi
// 005add5e  c3                   ret 
// 005add5f  33c0                 xor eax, eax
// 005add61  5e                   pop esi
// 005add62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
