// roc 2009-12 0064a3b0  unit: RBX::HopperBin::W4BinType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a3b0
//
// 0064a3b0  56                   push esi
// 0064a3b1  6a08                 push 8
// 0064a3b3  8bf1                 mov esi, ecx
// 0064a3b5  e8a6941a00           call 0x7f3860
// 0064a3ba  83c404               add esp, 4
// 0064a3bd  85c0                 test eax, eax
// 0064a3bf  740e                 je 0x64a3cf
// 0064a3c1  c7007ccb9c00         mov dword ptr [eax], 0x9ccb7c
// 0064a3c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a3ca  894804               mov dword ptr [eax + 4], ecx
// 0064a3cd  5e                   pop esi
// 0064a3ce  c3                   ret 
// 0064a3cf  33c0                 xor eax, eax
// 0064a3d1  5e                   pop esi
// 0064a3d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
