// roc 2011-06 005c6800  unit: RBX::KeyframeSequence::W4Priority::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6800
//
// 005c6800  56                   push esi
// 005c6801  6a08                 push 8
// 005c6803  8bf1                 mov esi, ecx
// 005c6805  e854382400           call 0x80a05e
// 005c680a  83c404               add esp, 4
// 005c680d  85c0                 test eax, eax
// 005c680f  740e                 je 0x5c681f
// 005c6811  c70080efa800         mov dword ptr [eax], 0xa8ef80
// 005c6817  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c681a  894804               mov dword ptr [eax + 4], ecx
// 005c681d  5e                   pop esi
// 005c681e  c3                   ret 
// 005c681f  33c0                 xor eax, eax
// 005c6821  5e                   pop esi
// 005c6822  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
