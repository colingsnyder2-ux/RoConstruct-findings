// roc 2010-06 00426e40  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426e40
//
// 00426e40  56                   push esi
// 00426e41  6a08                 push 8
// 00426e43  8bf1                 mov esi, ecx
// 00426e45  e8560b3800           call 0x7a79a0
// 00426e4a  83c404               add esp, 4
// 00426e4d  85c0                 test eax, eax
// 00426e4f  740e                 je 0x426e5f
// 00426e51  c700e846a000         mov dword ptr [eax], 0xa046e8
// 00426e57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00426e5a  894804               mov dword ptr [eax + 4], ecx
// 00426e5d  5e                   pop esi
// 00426e5e  c3                   ret 
// 00426e5f  33c0                 xor eax, eax
// 00426e61  5e                   pop esi
// 00426e62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
