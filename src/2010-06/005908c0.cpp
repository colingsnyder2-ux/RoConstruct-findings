// roc 2010-06 005908c0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005908c0
//
// 005908c0  56                   push esi
// 005908c1  6a08                 push 8
// 005908c3  8bf1                 mov esi, ecx
// 005908c5  e8d6702100           call 0x7a79a0
// 005908ca  83c404               add esp, 4
// 005908cd  85c0                 test eax, eax
// 005908cf  740e                 je 0x5908df
// 005908d1  c700cc8ea200         mov dword ptr [eax], 0xa28ecc
// 005908d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005908da  894804               mov dword ptr [eax + 4], ecx
// 005908dd  5e                   pop esi
// 005908de  c3                   ret 
// 005908df  33c0                 xor eax, eax
// 005908e1  5e                   pop esi
// 005908e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
