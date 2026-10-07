// roc 2012-06 0043bbc0  unit: VCProcessPerfCounter::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0043bbc0
//
// 0043bbc0  56                   push esi
// 0043bbc1  8b742408             mov esi, dword ptr [esp + 8]
// 0043bbc5  85f6                 test esi, esi
// 0043bbc7  742e                 je 0x43bbf7
// 0043bbc9  8b4604               mov eax, dword ptr [esi + 4]
// 0043bbcc  85c0                 test eax, eax
// 0043bbce  7409                 je 0x43bbd9
// 0043bbd0  50                   push eax
// 0043bbd1  e83e655400           call 0x982114
// 0043bbd6  83c404               add esp, 4
// 0043bbd9  56                   push esi
// 0043bbda  c7460400000000       mov dword ptr [esi + 4], 0
// 0043bbe1  c7460800000000       mov dword ptr [esi + 8], 0
// 0043bbe8  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043bbef  e820655400           call 0x982114
// 0043bbf4  83c404               add esp, 4
// 0043bbf7  5e                   pop esi
// 0043bbf8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??$checked_delete@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@boost@@YAXPAV?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
