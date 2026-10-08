// from server: 100% by auto
// roc 2010-06 00427b10  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427b10
//
// 00427b10  56                   push esi
// 00427b11  8b31                 mov esi, dword ptr [ecx]
// 00427b13  85f6                 test esi, esi
// 00427b15  7410                 je 0x427b27
// 00427b17  8bce                 mov ecx, esi
// 00427b19  e872fcffff           call 0x427790
// 00427b1e  56                   push esi
// 00427b1f  e876fe3700           call 0x7a799a
// 00427b24  83c404               add esp, 4
// 00427b27  5e                   pop esi
// 00427b28  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
