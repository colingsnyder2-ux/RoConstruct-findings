// from server: 100% by auto
// roc 2009-06 0045b190  unit: CRobloxWnd::PartDropTarget  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045b190
//
// 0045b190  56                   push esi
// 0045b191  8b31                 mov esi, dword ptr [ecx]
// 0045b193  85f6                 test esi, esi
// 0045b195  7410                 je 0x45b1a7
// 0045b197  8bce                 mov ecx, esi
// 0045b199  e802820400           call 0x4a33a0
// 0045b19e  56                   push esi
// 0045b19f  e88ed82b00           call 0x718a32
// 0045b1a4  83c404               add esp, 4
// 0045b1a7  5e                   pop esi
// 0045b1a8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
