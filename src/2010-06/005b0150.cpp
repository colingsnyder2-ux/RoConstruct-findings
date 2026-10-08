// roc 2010-06 005b0150  unit: RBX::Humanoid::W4Status::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0150
//
// 005b0150  56                   push esi
// 005b0151  6a08                 push 8
// 005b0153  8bf1                 mov esi, ecx
// 005b0155  e846781f00           call 0x7a79a0
// 005b015a  83c404               add esp, 4
// 005b015d  85c0                 test eax, eax
// 005b015f  740e                 je 0x5b016f
// 005b0161  c700b4ada200         mov dword ptr [eax], 0xa2adb4
// 005b0167  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b016a  894804               mov dword ptr [eax + 4], ecx
// 005b016d  5e                   pop esi
// 005b016e  c3                   ret 
// 005b016f  33c0                 xor eax, eax
// 005b0171  5e                   pop esi
// 005b0172  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
