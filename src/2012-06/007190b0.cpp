// from server: 100% by auto
// roc 2012-06 007190b0  unit: RBX::VProfanityFilter::?$sp_counted_impl_p  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007190b0
//
// 007190b0  56                   push esi
// 007190b1  8b31                 mov esi, dword ptr [ecx]
// 007190b3  85f6                 test esi, esi
// 007190b5  7410                 je 0x7190c7
// 007190b7  8bce                 mov ecx, esi
// 007190b9  e802f8ffff           call 0x7188c0
// 007190be  56                   push esi
// 007190bf  e850902600           call 0x982114
// 007190c4  83c404               add esp, 4
// 007190c7  5e                   pop esi
// 007190c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
