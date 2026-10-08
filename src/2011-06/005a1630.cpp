// roc 2011-06 005a1630  unit: RBX::W4SoundType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1630
//
// 005a1630  56                   push esi
// 005a1631  6a08                 push 8
// 005a1633  8bf1                 mov esi, ecx
// 005a1635  e8248a2600           call 0x80a05e
// 005a163a  83c404               add esp, 4
// 005a163d  85c0                 test eax, eax
// 005a163f  740e                 je 0x5a164f
// 005a1641  c700b8c8a800         mov dword ptr [eax], 0xa8c8b8
// 005a1647  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a164a  894804               mov dword ptr [eax + 4], ecx
// 005a164d  5e                   pop esi
// 005a164e  c3                   ret 
// 005a164f  33c0                 xor eax, eax
// 005a1651  5e                   pop esi
// 005a1652  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
