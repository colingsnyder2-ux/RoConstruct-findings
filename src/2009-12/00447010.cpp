// roc 2009-12 00447010  unit: RBX::CRenderSettings::W4MaterialQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00447010
//
// 00447010  56                   push esi
// 00447011  6a08                 push 8
// 00447013  8bf1                 mov esi, ecx
// 00447015  e846c83a00           call 0x7f3860
// 0044701a  83c404               add esp, 4
// 0044701d  85c0                 test eax, eax
// 0044701f  740e                 je 0x44702f
// 00447021  c70068a49a00         mov dword ptr [eax], 0x9aa468
// 00447027  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044702a  894804               mov dword ptr [eax + 4], ecx
// 0044702d  5e                   pop esi
// 0044702e  c3                   ret 
// 0044702f  33c0                 xor eax, eax
// 00447031  5e                   pop esi
// 00447032  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
