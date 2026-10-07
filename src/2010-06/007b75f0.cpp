// roc 2010-06 007b75f0  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b75f0
//
// 007b75f0  e8ebe0ffff           call 0x7b56e0
// 007b75f5  f7d8                 neg eax
// 007b75f7  1bc0                 sbb eax, eax
// 007b75f9  f7d8                 neg eax
// 007b75fb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
