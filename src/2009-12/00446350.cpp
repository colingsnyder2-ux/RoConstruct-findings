// roc 2009-12 00446350  unit: RBX::CRenderSettings::W4AntialiasingMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00446350
//
// 00446350  56                   push esi
// 00446351  6a08                 push 8
// 00446353  8bf1                 mov esi, ecx
// 00446355  e806d53a00           call 0x7f3860
// 0044635a  83c404               add esp, 4
// 0044635d  85c0                 test eax, eax
// 0044635f  740e                 je 0x44636f
// 00446361  c700a8a39a00         mov dword ptr [eax], 0x9aa3a8
// 00446367  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044636a  894804               mov dword ptr [eax + 4], ecx
// 0044636d  5e                   pop esi
// 0044636e  c3                   ret 
// 0044636f  33c0                 xor eax, eax
// 00446371  5e                   pop esi
// 00446372  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
