// roc 2009-06 00663060  unit: RBX::LegacyController::W4InputType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663060
//
// 00663060  56                   push esi
// 00663061  6a08                 push 8
// 00663063  8bf1                 mov esi, ecx
// 00663065  e8ce590b00           call 0x718a38
// 0066306a  83c404               add esp, 4
// 0066306d  85c0                 test eax, eax
// 0066306f  740e                 je 0x66307f
// 00663071  c700e41b8e00         mov dword ptr [eax], 0x8e1be4
// 00663077  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066307a  894804               mov dword ptr [eax + 4], ecx
// 0066307d  5e                   pop esi
// 0066307e  c3                   ret 
// 0066307f  33c0                 xor eax, eax
// 00663081  5e                   pop esi
// 00663082  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
