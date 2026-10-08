// roc 2010-06 004a4b10  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b10
//
// 004a4b10  56                   push esi
// 004a4b11  6a08                 push 8
// 004a4b13  8bf1                 mov esi, ecx
// 004a4b15  e8862e3000           call 0x7a79a0
// 004a4b1a  83c404               add esp, 4
// 004a4b1d  85c0                 test eax, eax
// 004a4b1f  740e                 je 0x4a4b2f
// 004a4b21  c700647ea100         mov dword ptr [eax], 0xa17e64
// 004a4b27  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a4b2a  894804               mov dword ptr [eax + 4], ecx
// 004a4b2d  5e                   pop esi
// 004a4b2e  c3                   ret 
// 004a4b2f  33c0                 xor eax, eax
// 004a4b31  5e                   pop esi
// 004a4b32  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
