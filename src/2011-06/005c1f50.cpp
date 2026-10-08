// roc 2011-06 005c1f50  unit: RBX::Controller::W4Button::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1f50
//
// 005c1f50  56                   push esi
// 005c1f51  6a08                 push 8
// 005c1f53  8bf1                 mov esi, ecx
// 005c1f55  e804812400           call 0x80a05e
// 005c1f5a  83c404               add esp, 4
// 005c1f5d  85c0                 test eax, eax
// 005c1f5f  740e                 je 0x5c1f6f
// 005c1f61  c700a0eaa800         mov dword ptr [eax], 0xa8eaa0
// 005c1f67  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c1f6a  894804               mov dword ptr [eax + 4], ecx
// 005c1f6d  5e                   pop esi
// 005c1f6e  c3                   ret 
// 005c1f6f  33c0                 xor eax, eax
// 005c1f71  5e                   pop esi
// 005c1f72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
