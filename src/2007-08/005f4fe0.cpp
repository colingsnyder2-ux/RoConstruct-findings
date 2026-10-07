// roc 2007-08 005f4fe0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4fe0
//
// 005f4fe0  8b442408             mov eax, dword ptr [esp + 8]
// 005f4fe4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f4fe8  50                   push eax
// 005f4fe9  e8b2e0ffff           call 0x5f30a0
// 005f4fee  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
