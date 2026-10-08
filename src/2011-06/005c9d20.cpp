// roc 2011-06 005c9d20  unit: RBX::DialogRoot::W4DialogPurpose::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9d20
//
// 005c9d20  56                   push esi
// 005c9d21  6a08                 push 8
// 005c9d23  8bf1                 mov esi, ecx
// 005c9d25  e834032400           call 0x80a05e
// 005c9d2a  83c404               add esp, 4
// 005c9d2d  85c0                 test eax, eax
// 005c9d2f  740e                 je 0x5c9d3f
// 005c9d31  c70010f3a800         mov dword ptr [eax], 0xa8f310
// 005c9d37  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c9d3a  894804               mov dword ptr [eax + 4], ecx
// 005c9d3d  5e                   pop esi
// 005c9d3e  c3                   ret 
// 005c9d3f  33c0                 xor eax, eax
// 005c9d41  5e                   pop esi
// 005c9d42  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
