// roc 2009-12 006ec3b0  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec3b0
//
// 006ec3b0  51                   push ecx
// 006ec3b1  e8fa5f0200           call 0x7123b0
// 006ec3b6  83c404               add esp, 4
// 006ec3b9  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
