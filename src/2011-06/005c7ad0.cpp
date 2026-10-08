// roc 2011-06 005c7ad0  unit: RBX::SpecialShape::W4MeshType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7ad0
//
// 005c7ad0  56                   push esi
// 005c7ad1  6a08                 push 8
// 005c7ad3  8bf1                 mov esi, ecx
// 005c7ad5  e884252400           call 0x80a05e
// 005c7ada  83c404               add esp, 4
// 005c7add  85c0                 test eax, eax
// 005c7adf  740e                 je 0x5c7aef
// 005c7ae1  c700d0f0a800         mov dword ptr [eax], 0xa8f0d0
// 005c7ae7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c7aea  894804               mov dword ptr [eax + 4], ecx
// 005c7aed  5e                   pop esi
// 005c7aee  c3                   ret 
// 005c7aef  33c0                 xor eax, eax
// 005c7af1  5e                   pop esi
// 005c7af2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
