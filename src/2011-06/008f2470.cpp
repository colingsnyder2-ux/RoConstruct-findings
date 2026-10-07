// roc 2011-06 008f2470  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2470
//
// 008f2470  e89bfdffff           call 0x8f2210
// 008f2475  f7d8                 neg eax
// 008f2477  1bc0                 sbb eax, eax
// 008f2479  f7d8                 neg eax
// 008f247b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
