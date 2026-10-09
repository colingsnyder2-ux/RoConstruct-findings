// roc 2009-12 00513a50  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513a50
//
// 00513a50  56                   push esi
// 00513a51  6a08                 push 8
// 00513a53  8bf1                 mov esi, ecx
// 00513a55  e806fe2d00           call 0x7f3860
// 00513a5a  83c404               add esp, 4
// 00513a5d  85c0                 test eax, eax
// 00513a5f  740e                 je 0x513a6f
// 00513a61  c7007cb39b00         mov dword ptr [eax], 0x9bb37c
// 00513a67  8b4e04               mov ecx, dword ptr [esi + 4]
// 00513a6a  894804               mov dword ptr [eax + 4], ecx
// 00513a6d  5e                   pop esi
// 00513a6e  c3                   ret 
// 00513a6f  33c0                 xor eax, eax
// 00513a71  5e                   pop esi
// 00513a72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
