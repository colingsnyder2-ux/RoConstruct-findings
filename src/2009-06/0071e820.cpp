// from server: 100% by auto
// roc 2009-06 0071e820  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071e820
//
// 0071e820  e82be0ffff           call 0x71c850
// 0071e825  f7d8                 neg eax
// 0071e827  1bc0                 sbb eax, eax
// 0071e829  f7d8                 neg eax
// 0071e82b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
