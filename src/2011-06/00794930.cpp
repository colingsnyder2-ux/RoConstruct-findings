// from server: 100% by auto
// roc 2011-06 00794930  unit: seg_00790000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794930
//
// 00794930  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00794934  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00794938  56                   push esi
// 00794939  8b742408             mov esi, dword ptr [esp + 8]
// 0079493d  50                   push eax
// 0079493e  51                   push ecx
// 0079493f  56                   push esi
// 00794940  e87bfaffff           call 0x7943c0
// 00794945  83c40c               add esp, 0xc
// 00794948  8bc6                 mov eax, esi
// 0079494a  5e                   pop esi
// 0079494b  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?status_api@detail@filesystem@boost@@YA?AVfile_status@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
