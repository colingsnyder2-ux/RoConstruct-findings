// roc 2011-06 005c4330  unit: RBX::Feature::W4InOut::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4330
//
// 005c4330  56                   push esi
// 005c4331  6a08                 push 8
// 005c4333  8bf1                 mov esi, ecx
// 005c4335  e8245d2400           call 0x80a05e
// 005c433a  83c404               add esp, 4
// 005c433d  85c0                 test eax, eax
// 005c433f  740e                 je 0x5c434f
// 005c4341  c70010eda800         mov dword ptr [eax], 0xa8ed10
// 005c4347  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c434a  894804               mov dword ptr [eax + 4], ecx
// 005c434d  5e                   pop esi
// 005c434e  c3                   ret 
// 005c434f  33c0                 xor eax, eax
// 005c4351  5e                   pop esi
// 005c4352  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
