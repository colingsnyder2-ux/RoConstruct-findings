// roc 2011-06 005c50a0  unit: RBX::Legacy::W4SurfaceConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c50a0
//
// 005c50a0  56                   push esi
// 005c50a1  6a08                 push 8
// 005c50a3  8bf1                 mov esi, ecx
// 005c50a5  e8b44f2400           call 0x80a05e
// 005c50aa  83c404               add esp, 4
// 005c50ad  85c0                 test eax, eax
// 005c50af  740e                 je 0x5c50bf
// 005c50b1  c70000eea800         mov dword ptr [eax], 0xa8ee00
// 005c50b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c50ba  894804               mov dword ptr [eax + 4], ecx
// 005c50bd  5e                   pop esi
// 005c50be  c3                   ret 
// 005c50bf  33c0                 xor eax, eax
// 005c50c1  5e                   pop esi
// 005c50c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
