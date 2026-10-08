// roc 2011-06 005c2d60  unit: RBX::GuiObject::W4TweenEasingDirection::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c2d60
//
// 005c2d60  56                   push esi
// 005c2d61  6a08                 push 8
// 005c2d63  8bf1                 mov esi, ecx
// 005c2d65  e8f4722400           call 0x80a05e
// 005c2d6a  83c404               add esp, 4
// 005c2d6d  85c0                 test eax, eax
// 005c2d6f  740e                 je 0x5c2d7f
// 005c2d71  c70090eba800         mov dword ptr [eax], 0xa8eb90
// 005c2d77  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c2d7a  894804               mov dword ptr [eax + 4], ecx
// 005c2d7d  5e                   pop esi
// 005c2d7e  c3                   ret 
// 005c2d7f  33c0                 xor eax, eax
// 005c2d81  5e                   pop esi
// 005c2d82  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
