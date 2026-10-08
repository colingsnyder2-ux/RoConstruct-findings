// roc 2011-06 004a5b70  unit: RBX::Network::Player::W4ChatMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5b70
//
// 004a5b70  56                   push esi
// 004a5b71  6a08                 push 8
// 004a5b73  8bf1                 mov esi, ecx
// 004a5b75  e8e4443600           call 0x80a05e
// 004a5b7a  83c404               add esp, 4
// 004a5b7d  85c0                 test eax, eax
// 004a5b7f  740e                 je 0x4a5b8f
// 004a5b81  c700486ea700         mov dword ptr [eax], 0xa76e48
// 004a5b87  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a5b8a  894804               mov dword ptr [eax + 4], ecx
// 004a5b8d  5e                   pop esi
// 004a5b8e  c3                   ret 
// 004a5b8f  33c0                 xor eax, eax
// 004a5b91  5e                   pop esi
// 004a5b92  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
