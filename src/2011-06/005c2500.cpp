// roc 2011-06 005c2500  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c2500
//
// 005c2500  56                   push esi
// 005c2501  6a08                 push 8
// 005c2503  8bf1                 mov esi, ecx
// 005c2505  e8547b2400           call 0x80a05e
// 005c250a  83c404               add esp, 4
// 005c250d  85c0                 test eax, eax
// 005c250f  740e                 je 0x5c251f
// 005c2511  c70000eba800         mov dword ptr [eax], 0xa8eb00
// 005c2517  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c251a  894804               mov dword ptr [eax + 4], ecx
// 005c251d  5e                   pop esi
// 005c251e  c3                   ret 
// 005c251f  33c0                 xor eax, eax
// 005c2521  5e                   pop esi
// 005c2522  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
