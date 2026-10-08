// from server: 100% by auto
// roc 2010-06 00677a00  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00677a00
//
// 00677a00  51                   push ecx
// 00677a01  e86a710100           call 0x68eb70
// 00677a06  83c404               add esp, 4
// 00677a09  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
