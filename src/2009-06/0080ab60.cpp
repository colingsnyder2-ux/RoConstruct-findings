// from server: 100% by auto
// roc 2009-06 0080ab60  unit: CXTCaptionButton  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ab60
//
// 0080ab60  e80b66f8ff           call 0x791170
// 0080ab65  f7d8                 neg eax
// 0080ab67  1bc0                 sbb eax, eax
// 0080ab69  f7d8                 neg eax
// 0080ab6b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
