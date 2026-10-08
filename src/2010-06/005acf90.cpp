// roc 2010-06 005acf90  unit: W4AffectType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005acf90
//
// 005acf90  56                   push esi
// 005acf91  6a08                 push 8
// 005acf93  8bf1                 mov esi, ecx
// 005acf95  e806aa1f00           call 0x7a79a0
// 005acf9a  83c404               add esp, 4
// 005acf9d  85c0                 test eax, eax
// 005acf9f  740e                 je 0x5acfaf
// 005acfa1  c700b4aaa200         mov dword ptr [eax], 0xa2aab4
// 005acfa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005acfaa  894804               mov dword ptr [eax + 4], ecx
// 005acfad  5e                   pop esi
// 005acfae  c3                   ret 
// 005acfaf  33c0                 xor eax, eax
// 005acfb1  5e                   pop esi
// 005acfb2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
