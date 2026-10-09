// roc 2009-12 004f6a30  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6a30
//
// 004f6a30  56                   push esi
// 004f6a31  6a08                 push 8
// 004f6a33  8bf1                 mov esi, ecx
// 004f6a35  e826ce2f00           call 0x7f3860
// 004f6a3a  83c404               add esp, 4
// 004f6a3d  85c0                 test eax, eax
// 004f6a3f  740e                 je 0x4f6a4f
// 004f6a41  c700b4a19b00         mov dword ptr [eax], 0x9ba1b4
// 004f6a47  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f6a4a  894804               mov dword ptr [eax + 4], ecx
// 004f6a4d  5e                   pop esi
// 004f6a4e  c3                   ret 
// 004f6a4f  33c0                 xor eax, eax
// 004f6a51  5e                   pop esi
// 004f6a52  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
