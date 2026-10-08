// roc 2011-06 005c72c0  unit: RBX::PyramidInstance::W4NumSidesEnum::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c72c0
//
// 005c72c0  56                   push esi
// 005c72c1  6a08                 push 8
// 005c72c3  8bf1                 mov esi, ecx
// 005c72c5  e8942d2400           call 0x80a05e
// 005c72ca  83c404               add esp, 4
// 005c72cd  85c0                 test eax, eax
// 005c72cf  740e                 je 0x5c72df
// 005c72d1  c70040f0a800         mov dword ptr [eax], 0xa8f040
// 005c72d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c72da  894804               mov dword ptr [eax + 4], ecx
// 005c72dd  5e                   pop esi
// 005c72de  c3                   ret 
// 005c72df  33c0                 xor eax, eax
// 005c72e1  5e                   pop esi
// 005c72e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
