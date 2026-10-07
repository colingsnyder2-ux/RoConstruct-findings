// roc 2011-06 00464e80  unit: LockPlayModeVerb2  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00464e80
//
// 00464e80  56                   push esi
// 00464e81  8b31                 mov esi, dword ptr [ecx]
// 00464e83  85f6                 test esi, esi
// 00464e85  7410                 je 0x464e97
// 00464e87  8bce                 mov ecx, esi
// 00464e89  e822170300           call 0x4965b0
// 00464e8e  56                   push esi
// 00464e8f  e8c4513a00           call 0x80a058
// 00464e94  83c404               add esp, 4
// 00464e97  5e                   pop esi
// 00464e98  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
