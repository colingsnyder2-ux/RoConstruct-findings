// roc 2009-12 0042af30  unit: CMainFrame  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042af30
//
// 0042af30  56                   push esi
// 0042af31  8b31                 mov esi, dword ptr [ecx]
// 0042af33  85f6                 test esi, esi
// 0042af35  7410                 je 0x42af47
// 0042af37  8bce                 mov ecx, esi
// 0042af39  e8627fffff           call 0x422ea0
// 0042af3e  56                   push esi
// 0042af3f  e816893c00           call 0x7f385a
// 0042af44  83c404               add esp, 4
// 0042af47  5e                   pop esi
// 0042af48  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
