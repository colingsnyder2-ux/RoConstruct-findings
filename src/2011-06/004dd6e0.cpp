// roc 2011-06 004dd6e0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dd6e0
//
// 004dd6e0  56                   push esi
// 004dd6e1  6a08                 push 8
// 004dd6e3  8bf1                 mov esi, ecx
// 004dd6e5  e874c93200           call 0x80a05e
// 004dd6ea  83c404               add esp, 4
// 004dd6ed  85c0                 test eax, eax
// 004dd6ef  740e                 je 0x4dd6ff
// 004dd6f1  c7001497a700         mov dword ptr [eax], 0xa79714
// 004dd6f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dd6fa  894804               mov dword ptr [eax + 4], ecx
// 004dd6fd  5e                   pop esi
// 004dd6fe  c3                   ret 
// 004dd6ff  33c0                 xor eax, eax
// 004dd701  5e                   pop esi
// 004dd702  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
