// roc 2008-06 005ed110  unit: RBX::W4SurfaceType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed110
//
// 005ed110  56                   push esi
// 005ed111  6a08                 push 8
// 005ed113  8bf1                 mov esi, ecx
// 005ed115  e806380b00           call 0x6a0920
// 005ed11a  83c404               add esp, 4
// 005ed11d  85c0                 test eax, eax
// 005ed11f  740e                 je 0x5ed12f
// 005ed121  c700e4fc8300         mov dword ptr [eax], 0x83fce4
// 005ed127  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ed12a  894804               mov dword ptr [eax + 4], ecx
// 005ed12d  5e                   pop esi
// 005ed12e  c3                   ret 
// 005ed12f  33c0                 xor eax, eax
// 005ed131  5e                   pop esi
// 005ed132  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
