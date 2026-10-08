// roc 2011-06 005a1110  unit: RBX::Soundscape::W4ReverbType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1110
//
// 005a1110  56                   push esi
// 005a1111  6a08                 push 8
// 005a1113  8bf1                 mov esi, ecx
// 005a1115  e8448f2600           call 0x80a05e
// 005a111a  83c404               add esp, 4
// 005a111d  85c0                 test eax, eax
// 005a111f  740e                 je 0x5a112f
// 005a1121  c70088c8a800         mov dword ptr [eax], 0xa8c888
// 005a1127  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a112a  894804               mov dword ptr [eax + 4], ecx
// 005a112d  5e                   pop esi
// 005a112e  c3                   ret 
// 005a112f  33c0                 xor eax, eax
// 005a1131  5e                   pop esi
// 005a1132  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
