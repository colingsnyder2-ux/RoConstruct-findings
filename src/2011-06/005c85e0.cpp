// roc 2011-06 005c85e0  unit: RBX::GuiService::W4CenterDialogType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c85e0
//
// 005c85e0  56                   push esi
// 005c85e1  6a08                 push 8
// 005c85e3  8bf1                 mov esi, ecx
// 005c85e5  e8741a2400           call 0x80a05e
// 005c85ea  83c404               add esp, 4
// 005c85ed  85c0                 test eax, eax
// 005c85ef  740e                 je 0x5c85ff
// 005c85f1  c70090f1a800         mov dword ptr [eax], 0xa8f190
// 005c85f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c85fa  894804               mov dword ptr [eax + 4], ecx
// 005c85fd  5e                   pop esi
// 005c85fe  c3                   ret 
// 005c85ff  33c0                 xor eax, eax
// 005c8601  5e                   pop esi
// 005c8602  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
