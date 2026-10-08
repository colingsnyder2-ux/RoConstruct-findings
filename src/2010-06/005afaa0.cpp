// roc 2010-06 005afaa0  unit: RBX::Legacy::W4SurfaceConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005afaa0
//
// 005afaa0  56                   push esi
// 005afaa1  6a08                 push 8
// 005afaa3  8bf1                 mov esi, ecx
// 005afaa5  e8f67e1f00           call 0x7a79a0
// 005afaaa  83c404               add esp, 4
// 005afaad  85c0                 test eax, eax
// 005afaaf  740e                 je 0x5afabf
// 005afab1  c70054ada200         mov dword ptr [eax], 0xa2ad54
// 005afab7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005afaba  894804               mov dword ptr [eax + 4], ecx
// 005afabd  5e                   pop esi
// 005afabe  c3                   ret 
// 005afabf  33c0                 xor eax, eax
// 005afac1  5e                   pop esi
// 005afac2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
