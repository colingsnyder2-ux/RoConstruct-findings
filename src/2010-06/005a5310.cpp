// roc 2010-06 005a5310  unit: RBX::W4NormalId::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5310
//
// 005a5310  56                   push esi
// 005a5311  6a08                 push 8
// 005a5313  8bf1                 mov esi, ecx
// 005a5315  e886262000           call 0x7a79a0
// 005a531a  83c404               add esp, 4
// 005a531d  85c0                 test eax, eax
// 005a531f  740e                 je 0x5a532f
// 005a5321  c70038a8a200         mov dword ptr [eax], 0xa2a838
// 005a5327  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a532a  894804               mov dword ptr [eax + 4], ecx
// 005a532d  5e                   pop esi
// 005a532e  c3                   ret 
// 005a532f  33c0                 xor eax, eax
// 005a5331  5e                   pop esi
// 005a5332  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
