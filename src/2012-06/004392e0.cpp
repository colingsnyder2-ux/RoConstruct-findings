// from server: 100% by auto
// roc 2012-06 004392e0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004392e0
//
// 004392e0  56                   push esi
// 004392e1  8b31                 mov esi, dword ptr [ecx]
// 004392e3  85f6                 test esi, esi
// 004392e5  7410                 je 0x4392f7
// 004392e7  8bce                 mov ecx, esi
// 004392e9  e86279ffff           call 0x430c50
// 004392ee  56                   push esi
// 004392ef  e8208e5400           call 0x982114
// 004392f4  83c404               add esp, 4
// 004392f7  5e                   pop esi
// 004392f8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
