// roc 2008-06 006aa140  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa140
//
// 006aa140  e89be0ffff           call 0x6a81e0
// 006aa145  f7d8                 neg eax
// 006aa147  1bc0                 sbb eax, eax
// 006aa149  f7d8                 neg eax
// 006aa14b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
