// roc 2010-06 005b1960  unit: RBX::W4SoundType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1960
//
// 005b1960  56                   push esi
// 005b1961  6a08                 push 8
// 005b1963  8bf1                 mov esi, ecx
// 005b1965  e836601f00           call 0x7a79a0
// 005b196a  83c404               add esp, 4
// 005b196d  85c0                 test eax, eax
// 005b196f  740e                 je 0x5b197f
// 005b1971  c70034afa200         mov dword ptr [eax], 0xa2af34
// 005b1977  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b197a  894804               mov dword ptr [eax + 4], ecx
// 005b197d  5e                   pop esi
// 005b197e  c3                   ret 
// 005b197f  33c0                 xor eax, eax
// 005b1981  5e                   pop esi
// 005b1982  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
