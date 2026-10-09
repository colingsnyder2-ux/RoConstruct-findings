// roc 2009-12 00446020  unit: RBX::CRenderSettings::W4FrameRateManagerMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00446020
//
// 00446020  56                   push esi
// 00446021  6a08                 push 8
// 00446023  8bf1                 mov esi, ecx
// 00446025  e836d83a00           call 0x7f3860
// 0044602a  83c404               add esp, 4
// 0044602d  85c0                 test eax, eax
// 0044602f  740e                 je 0x44603f
// 00446031  c70078a39a00         mov dword ptr [eax], 0x9aa378
// 00446037  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044603a  894804               mov dword ptr [eax + 4], ecx
// 0044603d  5e                   pop esi
// 0044603e  c3                   ret 
// 0044603f  33c0                 xor eax, eax
// 00446041  5e                   pop esi
// 00446042  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
