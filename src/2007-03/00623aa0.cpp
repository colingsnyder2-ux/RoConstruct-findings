// roc 2007-03 00623aa0  unit: seg_00620000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00623aa0
//
// 00623aa0  e86be0ffff           call 0x621b10
// 00623aa5  f7d8                 neg eax
// 00623aa7  1bc0                 sbb eax, eax
// 00623aa9  f7d8                 neg eax
// 00623aab  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
