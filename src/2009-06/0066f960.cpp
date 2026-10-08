// from server: 100% by auto
// roc 2009-06 0066f960  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f960
//
// 0066f960  51                   push ecx
// 0066f961  e87a630000           call 0x675ce0
// 0066f966  83c404               add esp, 4
// 0066f969  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
