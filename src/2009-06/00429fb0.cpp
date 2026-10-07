// roc 2009-06 00429fb0  unit: CMainFrame  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00429fb0
//
// 00429fb0  56                   push esi
// 00429fb1  8b31                 mov esi, dword ptr [ecx]
// 00429fb3  85f6                 test esi, esi
// 00429fb5  7410                 je 0x429fc7
// 00429fb7  8bce                 mov ecx, esi
// 00429fb9  e87282ffff           call 0x422230
// 00429fbe  56                   push esi
// 00429fbf  e86eea2e00           call 0x718a32
// 00429fc4  83c404               add esp, 4
// 00429fc7  5e                   pop esi
// 00429fc8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
