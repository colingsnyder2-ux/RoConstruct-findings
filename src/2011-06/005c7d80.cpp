// roc 2011-06 005c7d80  unit: RBX::W4SurfaceType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7d80
//
// 005c7d80  56                   push esi
// 005c7d81  6a08                 push 8
// 005c7d83  8bf1                 mov esi, ecx
// 005c7d85  e8d4222400           call 0x80a05e
// 005c7d8a  83c404               add esp, 4
// 005c7d8d  85c0                 test eax, eax
// 005c7d8f  740e                 je 0x5c7d9f
// 005c7d91  c70000f1a800         mov dword ptr [eax], 0xa8f100
// 005c7d97  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c7d9a  894804               mov dword ptr [eax + 4], ecx
// 005c7d9d  5e                   pop esi
// 005c7d9e  c3                   ret 
// 005c7d9f  33c0                 xor eax, eax
// 005c7da1  5e                   pop esi
// 005c7da2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
