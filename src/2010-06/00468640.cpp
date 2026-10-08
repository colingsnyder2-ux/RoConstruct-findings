// from server: 100% by auto
// roc 2010-06 00468640  unit: CRobloxWnd::PartDropTarget  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00468640
//
// 00468640  56                   push esi
// 00468641  8b31                 mov esi, dword ptr [ecx]
// 00468643  85f6                 test esi, esi
// 00468645  7410                 je 0x468657
// 00468647  8bce                 mov ecx, esi
// 00468649  e8a20b0100           call 0x4791f0
// 0046864e  56                   push esi
// 0046864f  e846f33300           call 0x7a799a
// 00468654  83c404               add esp, 4
// 00468657  5e                   pop esi
// 00468658  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
