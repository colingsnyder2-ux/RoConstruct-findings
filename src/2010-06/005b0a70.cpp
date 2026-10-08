// roc 2010-06 005b0a70  unit: RBX::ExtrudedPartInstance::W4VisualTrussStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0a70
//
// 005b0a70  56                   push esi
// 005b0a71  6a08                 push 8
// 005b0a73  8bf1                 mov esi, ecx
// 005b0a75  e8266f1f00           call 0x7a79a0
// 005b0a7a  83c404               add esp, 4
// 005b0a7d  85c0                 test eax, eax
// 005b0a7f  740e                 je 0x5b0a8f
// 005b0a81  c70044aea200         mov dword ptr [eax], 0xa2ae44
// 005b0a87  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b0a8a  894804               mov dword ptr [eax + 4], ecx
// 005b0a8d  5e                   pop esi
// 005b0a8e  c3                   ret 
// 005b0a8f  33c0                 xor eax, eax
// 005b0a91  5e                   pop esi
// 005b0a92  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
