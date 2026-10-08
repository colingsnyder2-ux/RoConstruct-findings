// from server: 100% by auto
// roc 2011-06 0062a360  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062a360
//
// 0062a360  56                   push esi
// 0062a361  8b31                 mov esi, dword ptr [ecx]
// 0062a363  85f6                 test esi, esi
// 0062a365  7410                 je 0x62a377
// 0062a367  8bce                 mov ecx, esi
// 0062a369  e802feffff           call 0x62a170
// 0062a36e  56                   push esi
// 0062a36f  e8e4fc1d00           call 0x80a058
// 0062a374  83c404               add esp, 4
// 0062a377  5e                   pop esi
// 0062a378  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
