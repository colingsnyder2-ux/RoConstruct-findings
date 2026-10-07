// roc 2012-06 007b9420  unit: RBX::Geometry  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b9420
//
// 007b9420  51                   push ecx
// 007b9421  e81a621000           call 0x8bf640
// 007b9426  83c404               add esp, 4
// 007b9429  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
