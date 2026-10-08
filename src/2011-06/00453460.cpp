// roc 2011-06 00453460  unit: RBX::CRenderSettings::W4MaterialQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00453460
//
// 00453460  56                   push esi
// 00453461  6a08                 push 8
// 00453463  8bf1                 mov esi, ecx
// 00453465  e8f46b3b00           call 0x80a05e
// 0045346a  83c404               add esp, 4
// 0045346d  85c0                 test eax, eax
// 0045346f  740e                 je 0x45347f
// 00453471  c700cccca600         mov dword ptr [eax], 0xa6cccc
// 00453477  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045347a  894804               mov dword ptr [eax + 4], ecx
// 0045347d  5e                   pop esi
// 0045347e  c3                   ret 
// 0045347f  33c0                 xor eax, eax
// 00453481  5e                   pop esi
// 00453482  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
