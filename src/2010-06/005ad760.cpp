// roc 2010-06 005ad760  unit: RBX::HopperBin::W4BinType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ad760
//
// 005ad760  56                   push esi
// 005ad761  6a08                 push 8
// 005ad763  8bf1                 mov esi, ecx
// 005ad765  e836a21f00           call 0x7a79a0
// 005ad76a  83c404               add esp, 4
// 005ad76d  85c0                 test eax, eax
// 005ad76f  740e                 je 0x5ad77f
// 005ad771  c70014aba200         mov dword ptr [eax], 0xa2ab14
// 005ad777  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ad77a  894804               mov dword ptr [eax + 4], ecx
// 005ad77d  5e                   pop esi
// 005ad77e  c3                   ret 
// 005ad77f  33c0                 xor eax, eax
// 005ad781  5e                   pop esi
// 005ad782  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
