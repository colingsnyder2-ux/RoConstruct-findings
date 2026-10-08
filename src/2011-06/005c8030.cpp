// roc 2011-06 005c8030  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8030
//
// 005c8030  56                   push esi
// 005c8031  6a08                 push 8
// 005c8033  8bf1                 mov esi, ecx
// 005c8035  e824202400           call 0x80a05e
// 005c803a  83c404               add esp, 4
// 005c803d  85c0                 test eax, eax
// 005c803f  740e                 je 0x5c804f
// 005c8041  c70030f1a800         mov dword ptr [eax], 0xa8f130
// 005c8047  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c804a  894804               mov dword ptr [eax + 4], ecx
// 005c804d  5e                   pop esi
// 005c804e  c3                   ret 
// 005c804f  33c0                 xor eax, eax
// 005c8051  5e                   pop esi
// 005c8052  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
