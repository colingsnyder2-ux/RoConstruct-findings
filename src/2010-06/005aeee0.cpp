// roc 2010-06 005aeee0  unit: RBX::Feature::W4LeftRight::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005aeee0
//
// 005aeee0  56                   push esi
// 005aeee1  6a08                 push 8
// 005aeee3  8bf1                 mov esi, ecx
// 005aeee5  e8b68a1f00           call 0x7a79a0
// 005aeeea  83c404               add esp, 4
// 005aeeed  85c0                 test eax, eax
// 005aeeef  740e                 je 0x5aeeff
// 005aeef1  c70094aca200         mov dword ptr [eax], 0xa2ac94
// 005aeef7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005aeefa  894804               mov dword ptr [eax + 4], ecx
// 005aeefd  5e                   pop esi
// 005aeefe  c3                   ret 
// 005aeeff  33c0                 xor eax, eax
// 005aef01  5e                   pop esi
// 005aef02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
