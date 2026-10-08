// roc 2010-06 00448750  unit: RBX::CRenderSettings::W4MaterialQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00448750
//
// 00448750  56                   push esi
// 00448751  6a08                 push 8
// 00448753  8bf1                 mov esi, ecx
// 00448755  e846f23500           call 0x7a79a0
// 0044875a  83c404               add esp, 4
// 0044875d  85c0                 test eax, eax
// 0044875f  740e                 je 0x44876f
// 00448761  c70020b2a000         mov dword ptr [eax], 0xa0b220
// 00448767  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044876a  894804               mov dword ptr [eax + 4], ecx
// 0044876d  5e                   pop esi
// 0044876e  c3                   ret 
// 0044876f  33c0                 xor eax, eax
// 00448771  5e                   pop esi
// 00448772  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
