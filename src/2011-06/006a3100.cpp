// roc 2011-06 006a3100  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3100
//
// 006a3100  51                   push ecx
// 006a3101  e8dae9ffff           call 0x6a1ae0
// 006a3106  83c404               add esp, 4
// 006a3109  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp
