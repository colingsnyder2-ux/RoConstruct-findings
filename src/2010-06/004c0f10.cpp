// roc 2010-06 004c0f10  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0f10
//
// 004c0f10  56                   push esi
// 004c0f11  6a08                 push 8
// 004c0f13  8bf1                 mov esi, ecx
// 004c0f15  e8866a2e00           call 0x7a79a0
// 004c0f1a  83c404               add esp, 4
// 004c0f1d  85c0                 test eax, eax
// 004c0f1f  740e                 je 0x4c0f2f
// 004c0f21  c7008891a100         mov dword ptr [eax], 0xa19188
// 004c0f27  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c0f2a  894804               mov dword ptr [eax + 4], ecx
// 004c0f2d  5e                   pop esi
// 004c0f2e  c3                   ret 
// 004c0f2f  33c0                 xor eax, eax
// 004c0f31  5e                   pop esi
// 004c0f32  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
