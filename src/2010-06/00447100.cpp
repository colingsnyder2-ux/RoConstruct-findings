// roc 2010-06 00447100  unit: RBX::CRenderSettings::W4AASamples::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447100
//
// 00447100  56                   push esi
// 00447101  6a08                 push 8
// 00447103  8bf1                 mov esi, ecx
// 00447105  e896083600           call 0x7a79a0
// 0044710a  83c404               add esp, 4
// 0044710d  85c0                 test eax, eax
// 0044710f  740e                 je 0x44711f
// 00447111  c700d0b0a000         mov dword ptr [eax], 0xa0b0d0
// 00447117  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044711a  894804               mov dword ptr [eax + 4], ecx
// 0044711d  5e                   pop esi
// 0044711e  c3                   ret 
// 0044711f  33c0                 xor eax, eax
// 00447121  5e                   pop esi
// 00447122  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
