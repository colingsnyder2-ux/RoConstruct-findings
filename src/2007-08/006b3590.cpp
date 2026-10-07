// roc 2007-08 006b3590  unit: CXTPControlGallery  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3590
//
// 006b3590  e8eb67f8ff           call 0x639d80
// 006b3595  f7d8                 neg eax
// 006b3597  1bc0                 sbb eax, eax
// 006b3599  f7d8                 neg eax
// 006b359b  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
