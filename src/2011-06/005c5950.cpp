// roc 2011-06 005c5950  unit: RBX::DataModel::W4CreatorType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5950
//
// 005c5950  56                   push esi
// 005c5951  6a08                 push 8
// 005c5953  8bf1                 mov esi, ecx
// 005c5955  e804472400           call 0x80a05e
// 005c595a  83c404               add esp, 4
// 005c595d  85c0                 test eax, eax
// 005c595f  740e                 je 0x5c596f
// 005c5961  c70090eea800         mov dword ptr [eax], 0xa8ee90
// 005c5967  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c596a  894804               mov dword ptr [eax + 4], ecx
// 005c596d  5e                   pop esi
// 005c596e  c3                   ret 
// 005c596f  33c0                 xor eax, eax
// 005c5971  5e                   pop esi
// 005c5972  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
