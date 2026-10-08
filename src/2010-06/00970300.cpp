// from server: 100% by auto
// roc 2010-06 00970300  unit: seg_00970000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00970300
//
// 00970300  56                   push esi
// 00970301  8bf1                 mov esi, ecx
// 00970303  e8f8feffff           call 0x970200
// 00970308  8b4614               mov eax, dword ptr [esi + 0x14]
// 0097030b  50                   push eax
// 0097030c  e88976e3ff           call 0x7a799a
// 00970311  8b0e                 mov ecx, dword ptr [esi]
// 00970313  51                   push ecx
// 00970314  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0097031b  e87a76e3ff           call 0x7a799a
// 00970320  83c408               add esp, 8
// 00970323  5e                   pop esi
// 00970324  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
