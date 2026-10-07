// roc 2011-06 0061d800  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061d800
//
// 0061d800  56                   push esi
// 0061d801  8b31                 mov esi, dword ptr [ecx]
// 0061d803  85f6                 test esi, esi
// 0061d805  7410                 je 0x61d817
// 0061d807  8bce                 mov ecx, esi
// 0061d809  e892580900           call 0x6b30a0
// 0061d80e  56                   push esi
// 0061d80f  e844c81e00           call 0x80a058
// 0061d814  83c404               add esp, 4
// 0061d817  5e                   pop esi
// 0061d818  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
