// roc 2011-06 005c3b20  unit: RBX::Camera::W4CameraType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3b20
//
// 005c3b20  56                   push esi
// 005c3b21  6a08                 push 8
// 005c3b23  8bf1                 mov esi, ecx
// 005c3b25  e834652400           call 0x80a05e
// 005c3b2a  83c404               add esp, 4
// 005c3b2d  85c0                 test eax, eax
// 005c3b2f  740e                 je 0x5c3b3f
// 005c3b31  c70080eca800         mov dword ptr [eax], 0xa8ec80
// 005c3b37  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c3b3a  894804               mov dword ptr [eax + 4], ecx
// 005c3b3d  5e                   pop esi
// 005c3b3e  c3                   ret 
// 005c3b3f  33c0                 xor eax, eax
// 005c3b41  5e                   pop esi
// 005c3b42  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
