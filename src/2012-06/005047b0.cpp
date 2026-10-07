// roc 2012-06 005047b0  unit: Ogre::RbxMeshPartAdapter  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005047b0
//
// 005047b0  56                   push esi
// 005047b1  8bf1                 mov esi, ecx
// 005047b3  8b4604               mov eax, dword ptr [esi + 4]
// 005047b6  85c0                 test eax, eax
// 005047b8  7409                 je 0x5047c3
// 005047ba  50                   push eax
// 005047bb  e854d94700           call 0x982114
// 005047c0  83c404               add esp, 4
// 005047c3  c7460400000000       mov dword ptr [esi + 4], 0
// 005047ca  c7460800000000       mov dword ptr [esi + 8], 0
// 005047d1  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005047d8  5e                   pop esi
// 005047d9  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Tidy@?$vector@DV?$allocator@D@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
