// roc 2009-12 008e5600  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5600
//
// 008e5600  e86bc2ffff           call 0x8e1870
// 008e5605  f7d8                 neg eax
// 008e5607  1bc0                 sbb eax, eax
// 008e5609  f7d8                 neg eax
// 008e560b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
