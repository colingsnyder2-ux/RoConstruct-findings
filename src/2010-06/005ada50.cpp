// roc 2010-06 005ada50  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ada50
//
// 005ada50  56                   push esi
// 005ada51  6a08                 push 8
// 005ada53  8bf1                 mov esi, ecx
// 005ada55  e8469f1f00           call 0x7a79a0
// 005ada5a  83c404               add esp, 4
// 005ada5d  85c0                 test eax, eax
// 005ada5f  740e                 je 0x5ada6f
// 005ada61  c70044aba200         mov dword ptr [eax], 0xa2ab44
// 005ada67  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ada6a  894804               mov dword ptr [eax + 4], ecx
// 005ada6d  5e                   pop esi
// 005ada6e  c3                   ret 
// 005ada6f  33c0                 xor eax, eax
// 005ada71  5e                   pop esi
// 005ada72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
