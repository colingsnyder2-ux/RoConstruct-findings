// from server: 100% by auto
// roc 2011-06 00423ae0  unit: InsertObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423ae0
//
// 00423ae0  e86bfbffff           call 0x423650
// 00423ae5  f7d8                 neg eax
// 00423ae7  1bc0                 sbb eax, eax
// 00423ae9  f7d8                 neg eax
// 00423aeb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
