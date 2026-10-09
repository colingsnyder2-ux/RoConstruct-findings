// roc 2009-12 0062d6b0  unit: RBX::TaskScheduler::W4ThreadConfig::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062d6b0
//
// 0062d6b0  56                   push esi
// 0062d6b1  6a08                 push 8
// 0062d6b3  8bf1                 mov esi, ecx
// 0062d6b5  e8a6611c00           call 0x7f3860
// 0062d6ba  83c404               add esp, 4
// 0062d6bd  85c0                 test eax, eax
// 0062d6bf  740e                 je 0x62d6cf
// 0062d6c1  c70044b09c00         mov dword ptr [eax], 0x9cb044
// 0062d6c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062d6ca  894804               mov dword ptr [eax + 4], ecx
// 0062d6cd  5e                   pop esi
// 0062d6ce  c3                   ret 
// 0062d6cf  33c0                 xor eax, eax
// 0062d6d1  5e                   pop esi
// 0062d6d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
