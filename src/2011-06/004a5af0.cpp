// roc 2011-06 004a5af0  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5af0
//
// 004a5af0  56                   push esi
// 004a5af1  6a08                 push 8
// 004a5af3  8bf1                 mov esi, ecx
// 004a5af5  e864453600           call 0x80a05e
// 004a5afa  83c404               add esp, 4
// 004a5afd  85c0                 test eax, eax
// 004a5aff  740e                 je 0x4a5b0f
// 004a5b01  c700286ea700         mov dword ptr [eax], 0xa76e28
// 004a5b07  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a5b0a  894804               mov dword ptr [eax + 4], ecx
// 004a5b0d  5e                   pop esi
// 004a5b0e  c3                   ret 
// 004a5b0f  33c0                 xor eax, eax
// 004a5b11  5e                   pop esi
// 004a5b12  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
