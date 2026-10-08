// roc 2010-06 00447430  unit: RBX::CRenderSettings::W4GraphicsMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447430
//
// 00447430  56                   push esi
// 00447431  6a08                 push 8
// 00447433  8bf1                 mov esi, ecx
// 00447435  e866053600           call 0x7a79a0
// 0044743a  83c404               add esp, 4
// 0044743d  85c0                 test eax, eax
// 0044743f  740e                 je 0x44744f
// 00447441  c70000b1a000         mov dword ptr [eax], 0xa0b100
// 00447447  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044744a  894804               mov dword ptr [eax + 4], ecx
// 0044744d  5e                   pop esi
// 0044744e  c3                   ret 
// 0044744f  33c0                 xor eax, eax
// 00447451  5e                   pop esi
// 00447452  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
