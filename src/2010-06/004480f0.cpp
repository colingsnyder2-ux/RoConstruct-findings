// roc 2010-06 004480f0  unit: RBX::CRenderSettings::W4GeometryQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004480f0
//
// 004480f0  56                   push esi
// 004480f1  6a08                 push 8
// 004480f3  8bf1                 mov esi, ecx
// 004480f5  e8a6f83500           call 0x7a79a0
// 004480fa  83c404               add esp, 4
// 004480fd  85c0                 test eax, eax
// 004480ff  740e                 je 0x44810f
// 00448101  c700c0b1a000         mov dword ptr [eax], 0xa0b1c0
// 00448107  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044810a  894804               mov dword ptr [eax + 4], ecx
// 0044810d  5e                   pop esi
// 0044810e  c3                   ret 
// 0044810f  33c0                 xor eax, eax
// 00448111  5e                   pop esi
// 00448112  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
