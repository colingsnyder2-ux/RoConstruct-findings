// roc 2010-06 00447a90  unit: RBX::CRenderSettings::W4AntialiasingMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447a90
//
// 00447a90  56                   push esi
// 00447a91  6a08                 push 8
// 00447a93  8bf1                 mov esi, ecx
// 00447a95  e806ff3500           call 0x7a79a0
// 00447a9a  83c404               add esp, 4
// 00447a9d  85c0                 test eax, eax
// 00447a9f  740e                 je 0x447aaf
// 00447aa1  c70060b1a000         mov dword ptr [eax], 0xa0b160
// 00447aa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00447aaa  894804               mov dword ptr [eax + 4], ecx
// 00447aad  5e                   pop esi
// 00447aae  c3                   ret 
// 00447aaf  33c0                 xor eax, eax
// 00447ab1  5e                   pop esi
// 00447ab2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
