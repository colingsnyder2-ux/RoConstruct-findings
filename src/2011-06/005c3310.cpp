// roc 2011-06 005c3310  unit: RBX::TextService::W4YAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3310
//
// 005c3310  56                   push esi
// 005c3311  6a08                 push 8
// 005c3313  8bf1                 mov esi, ecx
// 005c3315  e8446d2400           call 0x80a05e
// 005c331a  83c404               add esp, 4
// 005c331d  85c0                 test eax, eax
// 005c331f  740e                 je 0x5c332f
// 005c3321  c700f0eba800         mov dword ptr [eax], 0xa8ebf0
// 005c3327  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c332a  894804               mov dword ptr [eax + 4], ecx
// 005c332d  5e                   pop esi
// 005c332e  c3                   ret 
// 005c332f  33c0                 xor eax, eax
// 005c3331  5e                   pop esi
// 005c3332  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
