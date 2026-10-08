// from server: 100% by auto
// roc 2012-06 00a6a7e0  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a7e0
//
// 00a6a7e0  e8bbc2ffff           call 0xa66aa0
// 00a6a7e5  f7d8                 neg eax
// 00a6a7e7  1bc0                 sbb eax, eax
// 00a6a7e9  f7d8                 neg eax
// 00a6a7eb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
