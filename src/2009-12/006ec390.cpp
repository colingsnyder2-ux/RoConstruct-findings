// roc 2009-12 006ec390  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec390
//
// 006ec390  51                   push ecx
// 006ec391  e80aaa0b00           call 0x7a6da0
// 006ec396  83c404               add esp, 4
// 006ec399  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
