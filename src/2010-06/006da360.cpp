// roc 2010-06 006da360  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da360
//
// 006da360  51                   push ecx
// 006da361  e8da44f9ff           call 0x66e840
// 006da366  83c404               add esp, 4
// 006da369  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
