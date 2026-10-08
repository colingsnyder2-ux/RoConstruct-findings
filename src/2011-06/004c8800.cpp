// roc 2011-06 004c8800  unit: RBX::Network::Players::W4PlayerChatType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c8800
//
// 004c8800  56                   push esi
// 004c8801  6a08                 push 8
// 004c8803  8bf1                 mov esi, ecx
// 004c8805  e854183400           call 0x80a05e
// 004c880a  83c404               add esp, 4
// 004c880d  85c0                 test eax, eax
// 004c880f  740e                 je 0x4c881f
// 004c8811  c700608aa700         mov dword ptr [eax], 0xa78a60
// 004c8817  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c881a  894804               mov dword ptr [eax + 4], ecx
// 004c881d  5e                   pop esi
// 004c881e  c3                   ret 
// 004c881f  33c0                 xor eax, eax
// 004c8821  5e                   pop esi
// 004c8822  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
