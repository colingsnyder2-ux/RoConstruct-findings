// from server: 100% by auto
// roc 2011-06 00714fd0  unit: RBX::TouchTransmitter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714fd0
//
// 00714fd0  51                   push ecx
// 00714fd1  e88ab2f6ff           call 0x680260
// 00714fd6  83c404               add esp, 4
// 00714fd9  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
