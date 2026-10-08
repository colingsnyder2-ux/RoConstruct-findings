// roc 2009-12 007fc960  unit: CPatchedControlComboBox  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc960
//
// 007fc960  e89be0ffff           call 0x7faa00
// 007fc965  f7d8                 neg eax
// 007fc967  1bc0                 sbb eax, eax
// 007fc969  f7d8                 neg eax
// 007fc96b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
