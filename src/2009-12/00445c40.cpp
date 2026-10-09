// roc 2009-12 00445c40  unit: RBX::CRenderSettings::W4GraphicsMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00445c40
//
// 00445c40  56                   push esi
// 00445c41  6a08                 push 8
// 00445c43  8bf1                 mov esi, ecx
// 00445c45  e816dc3a00           call 0x7f3860
// 00445c4a  83c404               add esp, 4
// 00445c4d  85c0                 test eax, eax
// 00445c4f  740e                 je 0x445c5f
// 00445c51  c70048a39a00         mov dword ptr [eax], 0x9aa348
// 00445c57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00445c5a  894804               mov dword ptr [eax + 4], ecx
// 00445c5d  5e                   pop esi
// 00445c5e  c3                   ret 
// 00445c5f  33c0                 xor eax, eax
// 00445c61  5e                   pop esi
// 00445c62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
