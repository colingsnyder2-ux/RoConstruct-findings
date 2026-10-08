// roc 2010-06 004e6110  unit: RBX::VAxes::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6110
//
// 004e6110  56                   push esi
// 004e6111  6a08                 push 8
// 004e6113  8bf1                 mov esi, ecx
// 004e6115  e886182c00           call 0x7a79a0
// 004e611a  83c404               add esp, 4
// 004e611d  85c0                 test eax, eax
// 004e611f  740e                 je 0x4e612f
// 004e6121  c700a8b0a100         mov dword ptr [eax], 0xa1b0a8
// 004e6127  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e612a  894804               mov dword ptr [eax + 4], ecx
// 004e612d  5e                   pop esi
// 004e612e  c3                   ret 
// 004e612f  33c0                 xor eax, eax
// 004e6131  5e                   pop esi
// 004e6132  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
