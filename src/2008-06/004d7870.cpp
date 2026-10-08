// from server: 100% by auto
// roc 2008-06 004d7870  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7870
//
// 004d7870  56                   push esi
// 004d7871  8b31                 mov esi, dword ptr [ecx]
// 004d7873  85f6                 test esi, esi
// 004d7875  7410                 je 0x4d7887
// 004d7877  8bce                 mov ecx, esi
// 004d7879  e8e2fbffff           call 0x4d7460
// 004d787e  56                   push esi
// 004d787f  e8f68d1c00           call 0x6a067a
// 004d7884  83c404               add esp, 4
// 004d7887  5e                   pop esi
// 004d7888  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
