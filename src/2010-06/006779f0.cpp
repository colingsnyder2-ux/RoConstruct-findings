// roc 2010-06 006779f0  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006779f0
//
// 006779f0  51                   push ecx
// 006779f1  e81ae7ffff           call 0x676110
// 006779f6  83c404               add esp, 4
// 006779f9  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
