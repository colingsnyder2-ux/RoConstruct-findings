// roc 2007-03 00705d90  unit: seg_00700000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705d90
//
// 00705d90  e88bc5ffff           call 0x702320
// 00705d95  f7d8                 neg eax
// 00705d97  1bc0                 sbb eax, eax
// 00705d99  f7d8                 neg eax
// 00705d9b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
