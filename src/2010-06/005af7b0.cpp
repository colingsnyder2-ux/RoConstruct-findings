// roc 2010-06 005af7b0  unit: RBX::W4KeywordFilterType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af7b0
//
// 005af7b0  56                   push esi
// 005af7b1  6a08                 push 8
// 005af7b3  8bf1                 mov esi, ecx
// 005af7b5  e8e6811f00           call 0x7a79a0
// 005af7ba  83c404               add esp, 4
// 005af7bd  85c0                 test eax, eax
// 005af7bf  740e                 je 0x5af7cf
// 005af7c1  c70024ada200         mov dword ptr [eax], 0xa2ad24
// 005af7c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005af7ca  894804               mov dword ptr [eax + 4], ecx
// 005af7cd  5e                   pop esi
// 005af7ce  c3                   ret 
// 005af7cf  33c0                 xor eax, eax
// 005af7d1  5e                   pop esi
// 005af7d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
