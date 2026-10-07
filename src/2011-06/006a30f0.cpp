// roc 2011-06 006a30f0  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a30f0
//
// 006a30f0  51                   push ecx
// 006a30f1  e86a7f0f00           call 0x79b060
// 006a30f6  83c404               add esp, 4
// 006a30f9  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
