// from server: 100% by auto
// roc 2010-06 006de230  unit: RBX::VGuiMain::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006de230
//
// 006de230  56                   push esi
// 006de231  8b31                 mov esi, dword ptr [ecx]
// 006de233  85f6                 test esi, esi
// 006de235  7410                 je 0x6de247
// 006de237  8bce                 mov ecx, esi
// 006de239  e8a20ce1ff           call 0x4eeee0
// 006de23e  56                   push esi
// 006de23f  e856970c00           call 0x7a799a
// 006de244  83c404               add esp, 4
// 006de247  5e                   pop esi
// 006de248  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
