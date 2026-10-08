// roc 2007-03 0069f7c0  unit: seg_00690000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f7c0
//
// 0069f7c0  e8fbfaf8ff           call 0x62f2c0
// 0069f7c5  f7d8                 neg eax
// 0069f7c7  1bc0                 sbb eax, eax
// 0069f7c9  f7d8                 neg eax
// 0069f7cb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
