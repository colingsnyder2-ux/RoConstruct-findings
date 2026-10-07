// roc 2011-06 00819ad0  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00819ad0
//
// 00819ad0  e89be0ffff           call 0x817b70
// 00819ad5  f7d8                 neg eax
// 00819ad7  1bc0                 sbb eax, eax
// 00819ad9  f7d8                 neg eax
// 00819adb  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
