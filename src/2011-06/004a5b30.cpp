// roc 2011-06 004a5b30  unit: RBX::Network::Player::W4MembershipType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5b30
//
// 004a5b30  56                   push esi
// 004a5b31  6a08                 push 8
// 004a5b33  8bf1                 mov esi, ecx
// 004a5b35  e824453600           call 0x80a05e
// 004a5b3a  83c404               add esp, 4
// 004a5b3d  85c0                 test eax, eax
// 004a5b3f  740e                 je 0x4a5b4f
// 004a5b41  c700386ea700         mov dword ptr [eax], 0xa76e38
// 004a5b47  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a5b4a  894804               mov dword ptr [eax + 4], ecx
// 004a5b4d  5e                   pop esi
// 004a5b4e  c3                   ret 
// 004a5b4f  33c0                 xor eax, eax
// 004a5b51  5e                   pop esi
// 004a5b52  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
