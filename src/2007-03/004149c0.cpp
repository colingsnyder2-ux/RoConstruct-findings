// roc 2007-03 004149c0  unit: seg_00410000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004149c0
//
// 004149c0  56                   push esi
// 004149c1  6a08                 push 8
// 004149c3  8bf1                 mov esi, ecx
// 004149c5  e83e972000           call 0x61e108
// 004149ca  83c404               add esp, 4
// 004149cd  85c0                 test eax, eax
// 004149cf  740e                 je 0x4149df
// 004149d1  c7005c627800         mov dword ptr [eax], 0x78625c
// 004149d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004149da  894804               mov dword ptr [eax + 4], ecx
// 004149dd  5e                   pop esi
// 004149de  c3                   ret 
// 004149df  33c0                 xor eax, eax
// 004149e1  5e                   pop esi
// 004149e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
