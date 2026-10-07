// roc 2011-06 0072b610  unit: RBX::MeshContentProvider::VCachedMesh::?$sp_counted_impl_p  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072b610
//
// 0072b610  56                   push esi
// 0072b611  8bf1                 mov esi, ecx
// 0072b613  e858f7ffff           call 0x72ad70
// 0072b618  8b4604               mov eax, dword ptr [esi + 4]
// 0072b61b  50                   push eax
// 0072b61c  e837ea0d00           call 0x80a058
// 0072b621  83c404               add esp, 4
// 0072b624  c7460400000000       mov dword ptr [esi + 4], 0
// 0072b62b  5e                   pop esi
// 0072b62c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
