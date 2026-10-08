// roc 2011-06 005c45e0  unit: RBX::Feature::W4LeftRight::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c45e0
//
// 005c45e0  56                   push esi
// 005c45e1  6a08                 push 8
// 005c45e3  8bf1                 mov esi, ecx
// 005c45e5  e8745a2400           call 0x80a05e
// 005c45ea  83c404               add esp, 4
// 005c45ed  85c0                 test eax, eax
// 005c45ef  740e                 je 0x5c45ff
// 005c45f1  c70040eda800         mov dword ptr [eax], 0xa8ed40
// 005c45f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c45fa  894804               mov dword ptr [eax + 4], ecx
// 005c45fd  5e                   pop esi
// 005c45fe  c3                   ret 
// 005c45ff  33c0                 xor eax, eax
// 005c4601  5e                   pop esi
// 005c4602  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
