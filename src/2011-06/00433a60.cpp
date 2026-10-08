// from server: 100% by auto
// roc 2011-06 00433a60  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00433a60
//
// 00433a60  56                   push esi
// 00433a61  8b31                 mov esi, dword ptr [ecx]
// 00433a63  85f6                 test esi, esi
// 00433a65  7410                 je 0x433a77
// 00433a67  8bce                 mov ecx, esi
// 00433a69  e88289ffff           call 0x42c3f0
// 00433a6e  56                   push esi
// 00433a6f  e8e4653d00           call 0x80a058
// 00433a74  83c404               add esp, 4
// 00433a77  5e                   pop esi
// 00433a78  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
