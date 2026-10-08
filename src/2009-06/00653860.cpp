// from server: 100% by auto
// roc 2009-06 00653860  unit: RBX::ResizeTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653860
//
// 00653860  56                   push esi
// 00653861  8b31                 mov esi, dword ptr [ecx]
// 00653863  85f6                 test esi, esi
// 00653865  7410                 je 0x653877
// 00653867  8bce                 mov ecx, esi
// 00653869  e822f20500           call 0x6b2a90
// 0065386e  56                   push esi
// 0065386f  e8be510c00           call 0x718a32
// 00653874  83c404               add esp, 4
// 00653877  5e                   pop esi
// 00653878  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
