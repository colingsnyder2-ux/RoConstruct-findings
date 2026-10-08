// roc 2010-06 00447dc0  unit: RBX::CRenderSettings::W4BevelMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447dc0
//
// 00447dc0  56                   push esi
// 00447dc1  6a08                 push 8
// 00447dc3  8bf1                 mov esi, ecx
// 00447dc5  e8d6fb3500           call 0x7a79a0
// 00447dca  83c404               add esp, 4
// 00447dcd  85c0                 test eax, eax
// 00447dcf  740e                 je 0x447ddf
// 00447dd1  c70090b1a000         mov dword ptr [eax], 0xa0b190
// 00447dd7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00447dda  894804               mov dword ptr [eax + 4], ecx
// 00447ddd  5e                   pop esi
// 00447dde  c3                   ret 
// 00447ddf  33c0                 xor eax, eax
// 00447de1  5e                   pop esi
// 00447de2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
