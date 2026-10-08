// roc 2011-06 005c82e0  unit: RBX::GuiService::W4SpecialKey::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c82e0
//
// 005c82e0  56                   push esi
// 005c82e1  6a08                 push 8
// 005c82e3  8bf1                 mov esi, ecx
// 005c82e5  e8741d2400           call 0x80a05e
// 005c82ea  83c404               add esp, 4
// 005c82ed  85c0                 test eax, eax
// 005c82ef  740e                 je 0x5c82ff
// 005c82f1  c70060f1a800         mov dword ptr [eax], 0xa8f160
// 005c82f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c82fa  894804               mov dword ptr [eax + 4], ecx
// 005c82fd  5e                   pop esi
// 005c82fe  c3                   ret 
// 005c82ff  33c0                 xor eax, eax
// 005c8301  5e                   pop esi
// 005c8302  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
