// from server: 100% by auto
// roc 2010-06 00899910  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899910
//
// 00899910  e84b75f8ff           call 0x820e60
// 00899915  f7d8                 neg eax
// 00899917  1bc0                 sbb eax, eax
// 00899919  f7d8                 neg eax
// 0089991b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
