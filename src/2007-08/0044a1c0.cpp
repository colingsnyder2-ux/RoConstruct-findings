// from server: 100% by auto
// roc 2007-08 0044a1c0  unit: CRobloxModule  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a1c0
//
// 0044a1c0  8b442408             mov eax, dword ptr [esp + 8]
// 0044a1c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044a1c8  50                   push eax
// 0044a1c9  e8a2e7ffff           call 0x448970
// 0044a1ce  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
