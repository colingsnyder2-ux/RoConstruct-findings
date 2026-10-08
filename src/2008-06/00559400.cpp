// roc 2008-06 00559400  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559400
//
// 00559400  56                   push esi
// 00559401  6a08                 push 8
// 00559403  8bf1                 mov esi, ecx
// 00559405  e816751400           call 0x6a0920
// 0055940a  83c404               add esp, 4
// 0055940d  85c0                 test eax, eax
// 0055940f  740e                 je 0x55941f
// 00559411  c70014d78200         mov dword ptr [eax], 0x82d714
// 00559417  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055941a  894804               mov dword ptr [eax + 4], ecx
// 0055941d  5e                   pop esi
// 0055941e  c3                   ret 
// 0055941f  33c0                 xor eax, eax
// 00559421  5e                   pop esi
// 00559422  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
