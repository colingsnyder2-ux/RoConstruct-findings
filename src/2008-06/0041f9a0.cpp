// roc 2008-06 0041f9a0  unit: InsertObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f9a0
//
// 0041f9a0  e84bfcffff           call 0x41f5f0
// 0041f9a5  f7d8                 neg eax
// 0041f9a7  1bc0                 sbb eax, eax
// 0041f9a9  f7d8                 neg eax
// 0041f9ab  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??9?$basic_regex@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QBI_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
