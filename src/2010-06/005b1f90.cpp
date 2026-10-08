// roc 2010-06 005b1f90  unit: RBX::W4SurfaceType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1f90
//
// 005b1f90  56                   push esi
// 005b1f91  6a08                 push 8
// 005b1f93  8bf1                 mov esi, ecx
// 005b1f95  e8065a1f00           call 0x7a79a0
// 005b1f9a  83c404               add esp, 4
// 005b1f9d  85c0                 test eax, eax
// 005b1f9f  740e                 je 0x5b1faf
// 005b1fa1  c70094afa200         mov dword ptr [eax], 0xa2af94
// 005b1fa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b1faa  894804               mov dword ptr [eax + 4], ecx
// 005b1fad  5e                   pop esi
// 005b1fae  c3                   ret 
// 005b1faf  33c0                 xor eax, eax
// 005b1fb1  5e                   pop esi
// 005b1fb2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
