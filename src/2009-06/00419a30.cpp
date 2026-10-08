// from server: 100% by auto
// roc 2009-06 00419a30  unit: InsertObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419a30
//
// 00419a30  e81bfbffff           call 0x419550
// 00419a35  f7d8                 neg eax
// 00419a37  1bc0                 sbb eax, eax
// 00419a39  f7d8                 neg eax
// 00419a3b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
