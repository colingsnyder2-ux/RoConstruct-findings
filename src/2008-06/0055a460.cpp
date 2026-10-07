// roc 2008-06 0055a460  unit: RBX::VInstance::?$BoundFuncDesc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a460
//
// 0055a460  8b442408             mov eax, dword ptr [esp + 8]
// 0055a464  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055a468  50                   push eax
// 0055a469  e8e2f5ffff           call 0x559a50
// 0055a46e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
