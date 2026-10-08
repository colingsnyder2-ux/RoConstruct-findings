// roc 2011-06 004b3b30  unit: RBX::FriendService::W4FriendStatus::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b3b30
//
// 004b3b30  56                   push esi
// 004b3b31  6a08                 push 8
// 004b3b33  8bf1                 mov esi, ecx
// 004b3b35  e824653500           call 0x80a05e
// 004b3b3a  83c404               add esp, 4
// 004b3b3d  85c0                 test eax, eax
// 004b3b3f  740e                 je 0x4b3b4f
// 004b3b41  c7003875a700         mov dword ptr [eax], 0xa77538
// 004b3b47  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b3b4a  894804               mov dword ptr [eax + 4], ecx
// 004b3b4d  5e                   pop esi
// 004b3b4e  c3                   ret 
// 004b3b4f  33c0                 xor eax, eax
// 004b3b51  5e                   pop esi
// 004b3b52  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
