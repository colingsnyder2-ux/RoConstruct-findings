// roc 2011-06 005c6550  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6550
//
// 005c6550  56                   push esi
// 005c6551  6a08                 push 8
// 005c6553  8bf1                 mov esi, ecx
// 005c6555  e8043b2400           call 0x80a05e
// 005c655a  83c404               add esp, 4
// 005c655d  85c0                 test eax, eax
// 005c655f  740e                 je 0x5c656f
// 005c6561  c70050efa800         mov dword ptr [eax], 0xa8ef50
// 005c6567  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c656a  894804               mov dword ptr [eax + 4], ecx
// 005c656d  5e                   pop esi
// 005c656e  c3                   ret 
// 005c656f  33c0                 xor eax, eax
// 005c6571  5e                   pop esi
// 005c6572  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
