// roc 2011-06 005c9410  unit: RBX::GameBasicSettings::W4ControlMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9410
//
// 005c9410  56                   push esi
// 005c9411  6a08                 push 8
// 005c9413  8bf1                 mov esi, ecx
// 005c9415  e8440c2400           call 0x80a05e
// 005c941a  83c404               add esp, 4
// 005c941d  85c0                 test eax, eax
// 005c941f  740e                 je 0x5c942f
// 005c9421  c70080f2a800         mov dword ptr [eax], 0xa8f280
// 005c9427  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c942a  894804               mov dword ptr [eax + 4], ecx
// 005c942d  5e                   pop esi
// 005c942e  c3                   ret 
// 005c942f  33c0                 xor eax, eax
// 005c9431  5e                   pop esi
// 005c9432  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
