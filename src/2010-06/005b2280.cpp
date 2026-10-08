// roc 2010-06 005b2280  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2280
//
// 005b2280  56                   push esi
// 005b2281  6a08                 push 8
// 005b2283  8bf1                 mov esi, ecx
// 005b2285  e816571f00           call 0x7a79a0
// 005b228a  83c404               add esp, 4
// 005b228d  85c0                 test eax, eax
// 005b228f  740e                 je 0x5b229f
// 005b2291  c700c4afa200         mov dword ptr [eax], 0xa2afc4
// 005b2297  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b229a  894804               mov dword ptr [eax + 4], ecx
// 005b229d  5e                   pop esi
// 005b229e  c3                   ret 
// 005b229f  33c0                 xor eax, eax
// 005b22a1  5e                   pop esi
// 005b22a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
