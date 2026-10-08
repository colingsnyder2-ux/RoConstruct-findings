// from server: 100% by auto
// roc 2008-06 00637a00  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637a00
//
// 00637a00  8b442408             mov eax, dword ptr [esp + 8]
// 00637a04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00637a08  50                   push eax
// 00637a09  e862e9ffff           call 0x636370
// 00637a0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
