// from server: 100% by auto
// roc 2007-08 006391b0  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006391b0
//
// 006391b0  e84be1ffff           call 0x637300
// 006391b5  f7d8                 neg eax
// 006391b7  1bc0                 sbb eax, eax
// 006391b9  f7d8                 neg eax
// 006391bb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
