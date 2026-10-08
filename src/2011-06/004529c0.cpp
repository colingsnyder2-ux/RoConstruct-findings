// roc 2011-06 004529c0  unit: RBX::CRenderSettings::W4FrameRateManagerMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004529c0
//
// 004529c0  56                   push esi
// 004529c1  6a08                 push 8
// 004529c3  8bf1                 mov esi, ecx
// 004529c5  e894763b00           call 0x80a05e
// 004529ca  83c404               add esp, 4
// 004529cd  85c0                 test eax, eax
// 004529cf  740e                 je 0x4529df
// 004529d1  c700dccba600         mov dword ptr [eax], 0xa6cbdc
// 004529d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004529da  894804               mov dword ptr [eax + 4], ecx
// 004529dd  5e                   pop esi
// 004529de  c3                   ret 
// 004529df  33c0                 xor eax, eax
// 004529e1  5e                   pop esi
// 004529e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
