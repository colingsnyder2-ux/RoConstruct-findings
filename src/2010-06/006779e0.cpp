// roc 2010-06 006779e0  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006779e0
//
// 006779e0  51                   push ecx
// 006779e1  e85afd0c00           call 0x747740
// 006779e6  83c404               add esp, 4
// 006779e9  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
