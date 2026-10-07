// roc 2011-06 0040d4a0  unit: boost::Vbad_any_cast::U?$error_info_injector::?$clone_impl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040d4a0
//
// 0040d4a0  56                   push esi
// 0040d4a1  8bf1                 mov esi, ecx
// 0040d4a3  8b4604               mov eax, dword ptr [esi + 4]
// 0040d4a6  85c0                 test eax, eax
// 0040d4a8  7409                 je 0x40d4b3
// 0040d4aa  50                   push eax
// 0040d4ab  e8a8cb3f00           call 0x80a058
// 0040d4b0  83c404               add esp, 4
// 0040d4b3  c7460400000000       mov dword ptr [esi + 4], 0
// 0040d4ba  c7460800000000       mov dword ptr [esi + 8], 0
// 0040d4c1  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0040d4c8  5e                   pop esi
// 0040d4c9  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Tidy@?$vector@DV?$allocator@D@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
