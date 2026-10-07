// roc 2007-08 00714b80  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714b80
//
// 00714b80  e80bc4ffff           call 0x710f90
// 00714b85  f7d8                 neg eax
// 00714b87  1bc0                 sbb eax, eax
// 00714b89  f7d8                 neg eax
// 00714b8b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
