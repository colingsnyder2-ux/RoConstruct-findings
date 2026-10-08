// roc 2011-06 00453680  unit: RBX::CRenderSettings::W4ResolutionPreset::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00453680
//
// 00453680  56                   push esi
// 00453681  6a08                 push 8
// 00453683  8bf1                 mov esi, ecx
// 00453685  e8d4693b00           call 0x80a05e
// 0045368a  83c404               add esp, 4
// 0045368d  85c0                 test eax, eax
// 0045368f  740e                 je 0x45369f
// 00453691  c700fccca600         mov dword ptr [eax], 0xa6ccfc
// 00453697  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045369a  894804               mov dword ptr [eax + 4], ecx
// 0045369d  5e                   pop esi
// 0045369e  c3                   ret 
// 0045369f  33c0                 xor eax, eax
// 004536a1  5e                   pop esi
// 004536a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
