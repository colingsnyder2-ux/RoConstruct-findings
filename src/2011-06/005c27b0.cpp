// roc 2011-06 005c27b0  unit: RBX::GuiObject::W4TweenEasingStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c27b0
//
// 005c27b0  56                   push esi
// 005c27b1  6a08                 push 8
// 005c27b3  8bf1                 mov esi, ecx
// 005c27b5  e8a4782400           call 0x80a05e
// 005c27ba  83c404               add esp, 4
// 005c27bd  85c0                 test eax, eax
// 005c27bf  740e                 je 0x5c27cf
// 005c27c1  c70030eba800         mov dword ptr [eax], 0xa8eb30
// 005c27c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c27ca  894804               mov dword ptr [eax + 4], ecx
// 005c27cd  5e                   pop esi
// 005c27ce  c3                   ret 
// 005c27cf  33c0                 xor eax, eax
// 005c27d1  5e                   pop esi
// 005c27d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
