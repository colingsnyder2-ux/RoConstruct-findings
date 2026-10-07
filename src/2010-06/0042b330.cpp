// roc 2010-06 0042b330  unit: CMainFrame  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042b330
//
// 0042b330  56                   push esi
// 0042b331  8b31                 mov esi, dword ptr [ecx]
// 0042b333  85f6                 test esi, esi
// 0042b335  7410                 je 0x42b347
// 0042b337  8bce                 mov ecx, esi
// 0042b339  e8c27fffff           call 0x423300
// 0042b33e  56                   push esi
// 0042b33f  e856c63700           call 0x7a799a
// 0042b344  83c404               add esp, 4
// 0042b347  5e                   pop esi
// 0042b348  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
