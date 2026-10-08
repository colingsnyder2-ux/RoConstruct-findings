// from server: 100% by auto
// roc 2011-06 006a3110  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3110
//
// 006a3110  51                   push ecx
// 006a3111  e82a970200           call 0x6cc840
// 006a3116  83c404               add esp, 4
// 006a3119  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
