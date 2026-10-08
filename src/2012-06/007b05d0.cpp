// from server: 100% by auto
// roc 2012-06 007b05d0  unit: std::D::DU?$char_traits::V?$basic_string::?$MemEnforcedLRUCache  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b05d0
//
// 007b05d0  56                   push esi
// 007b05d1  8b31                 mov esi, dword ptr [ecx]
// 007b05d3  85f6                 test esi, esi
// 007b05d5  7410                 je 0x7b05e7
// 007b05d7  8bce                 mov ecx, esi
// 007b05d9  e812fcffff           call 0x7b01f0
// 007b05de  56                   push esi
// 007b05df  e8301b1d00           call 0x982114
// 007b05e4  83c404               add esp, 4
// 007b05e7  5e                   pop esi
// 007b05e8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
