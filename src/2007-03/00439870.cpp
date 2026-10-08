// roc 2007-03 00439870  unit: seg_00430000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439870
//
// 00439870  56                   push esi
// 00439871  8bf1                 mov esi, ecx
// 00439873  8b4604               mov eax, dword ptr [esi + 4]
// 00439876  85c0                 test eax, eax
// 00439878  7409                 je 0x439883
// 0043987a  50                   push eax
// 0043987b  e870481e00           call 0x61e0f0
// 00439880  83c404               add esp, 4
// 00439883  c7460400000000       mov dword ptr [esi + 4], 0
// 0043988a  c7460800000000       mov dword ptr [esi + 8], 0
// 00439891  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00439898  5e                   pop esi
// 00439899  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?_Tidy@?$vector@PAVPropertyDescriptor@Reflection@RBX@@V?$allocator@PAVPropertyDescriptor@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
