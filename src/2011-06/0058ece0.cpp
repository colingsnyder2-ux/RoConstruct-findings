// roc 2011-06 0058ece0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ece0
//
// 0058ece0  56                   push esi
// 0058ece1  6a08                 push 8
// 0058ece3  8bf1                 mov esi, ecx
// 0058ece5  e874b32700           call 0x80a05e
// 0058ecea  83c404               add esp, 4
// 0058eced  85c0                 test eax, eax
// 0058ecef  740e                 je 0x58ecff
// 0058ecf1  c7001c8fa800         mov dword ptr [eax], 0xa88f1c
// 0058ecf7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058ecfa  894804               mov dword ptr [eax + 4], ecx
// 0058ecfd  5e                   pop esi
// 0058ecfe  c3                   ret 
// 0058ecff  33c0                 xor eax, eax
// 0058ed01  5e                   pop esi
// 0058ed02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
