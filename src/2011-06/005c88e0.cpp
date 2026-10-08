// roc 2011-06 005c88e0  unit: RBX::ChatService::W4ChatColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c88e0
//
// 005c88e0  56                   push esi
// 005c88e1  6a08                 push 8
// 005c88e3  8bf1                 mov esi, ecx
// 005c88e5  e874172400           call 0x80a05e
// 005c88ea  83c404               add esp, 4
// 005c88ed  85c0                 test eax, eax
// 005c88ef  740e                 je 0x5c88ff
// 005c88f1  c700c0f1a800         mov dword ptr [eax], 0xa8f1c0
// 005c88f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c88fa  894804               mov dword ptr [eax + 4], ecx
// 005c88fd  5e                   pop esi
// 005c88fe  c3                   ret 
// 005c88ff  33c0                 xor eax, eax
// 005c8901  5e                   pop esi
// 005c8902  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
