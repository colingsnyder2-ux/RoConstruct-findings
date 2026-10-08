// roc 2011-06 004d2e40  unit: RBX::FriendService::W4FriendEventType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d2e40
//
// 004d2e40  56                   push esi
// 004d2e41  6a08                 push 8
// 004d2e43  8bf1                 mov esi, ecx
// 004d2e45  e814723300           call 0x80a05e
// 004d2e4a  83c404               add esp, 4
// 004d2e4d  85c0                 test eax, eax
// 004d2e4f  740e                 je 0x4d2e5f
// 004d2e51  c700608ea700         mov dword ptr [eax], 0xa78e60
// 004d2e57  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d2e5a  894804               mov dword ptr [eax + 4], ecx
// 004d2e5d  5e                   pop esi
// 004d2e5e  c3                   ret 
// 004d2e5f  33c0                 xor eax, eax
// 004d2e61  5e                   pop esi
// 004d2e62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
