// roc 2010-06 00447760  unit: RBX::CRenderSettings::W4FrameRateManagerMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447760
//
// 00447760  56                   push esi
// 00447761  6a08                 push 8
// 00447763  8bf1                 mov esi, ecx
// 00447765  e836023600           call 0x7a79a0
// 0044776a  83c404               add esp, 4
// 0044776d  85c0                 test eax, eax
// 0044776f  740e                 je 0x44777f
// 00447771  c70030b1a000         mov dword ptr [eax], 0xa0b130
// 00447777  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044777a  894804               mov dword ptr [eax + 4], ecx
// 0044777d  5e                   pop esi
// 0044777e  c3                   ret 
// 0044777f  33c0                 xor eax, eax
// 00447781  5e                   pop esi
// 00447782  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
