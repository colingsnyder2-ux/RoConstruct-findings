// from server: 100% by auto
// roc 2008-06 0045b620  unit: CRobloxWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b620
//
// 0045b620  56                   push esi
// 0045b621  8b31                 mov esi, dword ptr [ecx]
// 0045b623  85f6                 test esi, esi
// 0045b625  7410                 je 0x45b637
// 0045b627  8bce                 mov ecx, esi
// 0045b629  e892080200           call 0x47bec0
// 0045b62e  56                   push esi
// 0045b62f  e846502400           call 0x6a067a
// 0045b634  83c404               add esp, 4
// 0045b637  5e                   pop esi
// 0045b638  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
