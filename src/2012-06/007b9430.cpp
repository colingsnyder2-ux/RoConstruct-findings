// from server: 100% by auto
// roc 2012-06 007b9430  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b9430
//
// 007b9430  51                   push ecx
// 007b9431  e8caa40200           call 0x7e3900
// 007b9436  83c404               add esp, 4
// 007b9439  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
