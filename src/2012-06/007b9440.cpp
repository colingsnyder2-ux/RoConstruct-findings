// roc 2012-06 007b9440  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b9440
//
// 007b9440  51                   push ecx
// 007b9441  e8fa240600           call 0x81b940
// 007b9446  83c404               add esp, 4
// 007b9449  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
