// roc 2009-12 005233e0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005233e0
//
// 005233e0  56                   push esi
// 005233e1  6a08                 push 8
// 005233e3  8bf1                 mov esi, ecx
// 005233e5  e876042d00           call 0x7f3860
// 005233ea  83c404               add esp, 4
// 005233ed  85c0                 test eax, eax
// 005233ef  740e                 je 0x5233ff
// 005233f1  c70054ba9b00         mov dword ptr [eax], 0x9bba54
// 005233f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005233fa  894804               mov dword ptr [eax + 4], ecx
// 005233fd  5e                   pop esi
// 005233fe  c3                   ret 
// 005233ff  33c0                 xor eax, eax
// 00523401  5e                   pop esi
// 00523402  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
