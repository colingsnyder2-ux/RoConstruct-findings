// roc 2010-06 005b0490  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0490
//
// 005b0490  56                   push esi
// 005b0491  6a08                 push 8
// 005b0493  8bf1                 mov esi, ecx
// 005b0495  e806751f00           call 0x7a79a0
// 005b049a  83c404               add esp, 4
// 005b049d  85c0                 test eax, eax
// 005b049f  740e                 je 0x5b04af
// 005b04a1  c700e4ada200         mov dword ptr [eax], 0xa2ade4
// 005b04a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b04aa  894804               mov dword ptr [eax + 4], ecx
// 005b04ad  5e                   pop esi
// 005b04ae  c3                   ret 
// 005b04af  33c0                 xor eax, eax
// 005b04b1  5e                   pop esi
// 005b04b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
