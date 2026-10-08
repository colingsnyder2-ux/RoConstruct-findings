// roc 2011-06 005c9a00  unit: RBX::GuiButton::W4Style::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9a00
//
// 005c9a00  56                   push esi
// 005c9a01  6a08                 push 8
// 005c9a03  8bf1                 mov esi, ecx
// 005c9a05  e854062400           call 0x80a05e
// 005c9a0a  83c404               add esp, 4
// 005c9a0d  85c0                 test eax, eax
// 005c9a0f  740e                 je 0x5c9a1f
// 005c9a11  c700e0f2a800         mov dword ptr [eax], 0xa8f2e0
// 005c9a17  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c9a1a  894804               mov dword ptr [eax + 4], ecx
// 005c9a1d  5e                   pop esi
// 005c9a1e  c3                   ret 
// 005c9a1f  33c0                 xor eax, eax
// 005c9a21  5e                   pop esi
// 005c9a22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
