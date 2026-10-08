// roc 2011-06 00452be0  unit: RBX::CRenderSettings::W4BevelMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452be0
//
// 00452be0  56                   push esi
// 00452be1  6a08                 push 8
// 00452be3  8bf1                 mov esi, ecx
// 00452be5  e874743b00           call 0x80a05e
// 00452bea  83c404               add esp, 4
// 00452bed  85c0                 test eax, eax
// 00452bef  740e                 je 0x452bff
// 00452bf1  c7000ccca600         mov dword ptr [eax], 0xa6cc0c
// 00452bf7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00452bfa  894804               mov dword ptr [eax + 4], ecx
// 00452bfd  5e                   pop esi
// 00452bfe  c3                   ret 
// 00452bff  33c0                 xor eax, eax
// 00452c01  5e                   pop esi
// 00452c02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
