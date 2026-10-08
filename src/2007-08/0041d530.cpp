// from server: 100% by auto
// roc 2007-08 0041d530  unit: InsertObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d530
//
// 0041d530  e84bfcffff           call 0x41d180
// 0041d535  f7d8                 neg eax
// 0041d537  1bc0                 sbb eax, eax
// 0041d539  f7d8                 neg eax
// 0041d53b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
