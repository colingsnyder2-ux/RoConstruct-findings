// roc 2011-06 005c5350  unit: G3D::Vector3::W4Axis::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5350
//
// 005c5350  56                   push esi
// 005c5351  6a08                 push 8
// 005c5353  8bf1                 mov esi, ecx
// 005c5355  e8044d2400           call 0x80a05e
// 005c535a  83c404               add esp, 4
// 005c535d  85c0                 test eax, eax
// 005c535f  740e                 je 0x5c536f
// 005c5361  c70030eea800         mov dword ptr [eax], 0xa8ee30
// 005c5367  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c536a  894804               mov dword ptr [eax + 4], ecx
// 005c536d  5e                   pop esi
// 005c536e  c3                   ret 
// 005c536f  33c0                 xor eax, eax
// 005c5371  5e                   pop esi
// 005c5372  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
