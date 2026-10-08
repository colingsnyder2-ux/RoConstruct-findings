// roc 2011-06 004538a0  unit: RBX::CRenderSettings::W4ShadowMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004538a0
//
// 004538a0  56                   push esi
// 004538a1  6a08                 push 8
// 004538a3  8bf1                 mov esi, ecx
// 004538a5  e8b4673b00           call 0x80a05e
// 004538aa  83c404               add esp, 4
// 004538ad  85c0                 test eax, eax
// 004538af  740e                 je 0x4538bf
// 004538b1  c7002ccda600         mov dword ptr [eax], 0xa6cd2c
// 004538b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004538ba  894804               mov dword ptr [eax + 4], ecx
// 004538bd  5e                   pop esi
// 004538be  c3                   ret 
// 004538bf  33c0                 xor eax, eax
// 004538c1  5e                   pop esi
// 004538c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
