// roc 2011-06 005c9750  unit: RBX::Frame::W4Style::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9750
//
// 005c9750  56                   push esi
// 005c9751  6a08                 push 8
// 005c9753  8bf1                 mov esi, ecx
// 005c9755  e804092400           call 0x80a05e
// 005c975a  83c404               add esp, 4
// 005c975d  85c0                 test eax, eax
// 005c975f  740e                 je 0x5c976f
// 005c9761  c700b0f2a800         mov dword ptr [eax], 0xa8f2b0
// 005c9767  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c976a  894804               mov dword ptr [eax + 4], ecx
// 005c976d  5e                   pop esi
// 005c976e  c3                   ret 
// 005c976f  33c0                 xor eax, eax
// 005c9771  5e                   pop esi
// 005c9772  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
