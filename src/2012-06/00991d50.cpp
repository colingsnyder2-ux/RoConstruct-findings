// from server: 100% by auto
// roc 2012-06 00991d50  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00991d50
//
// 00991d50  e84be0ffff           call 0x98fda0
// 00991d55  f7d8                 neg eax
// 00991d57  1bc0                 sbb eax, eax
// 00991d59  f7d8                 neg eax
// 00991d5b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
