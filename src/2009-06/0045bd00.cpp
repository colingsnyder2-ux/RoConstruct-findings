// from server: 100% by auto
// roc 2009-06 0045bd00  unit: CRobloxWnd::UserInputJob  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045bd00
//
// 0045bd00  56                   push esi
// 0045bd01  8b31                 mov esi, dword ptr [ecx]
// 0045bd03  85f6                 test esi, esi
// 0045bd05  7410                 je 0x45bd17
// 0045bd07  8bce                 mov ecx, esi
// 0045bd09  e832ea0000           call 0x46a740
// 0045bd0e  56                   push esi
// 0045bd0f  e81ecd2b00           call 0x718a32
// 0045bd14  83c404               add esp, 4
// 0045bd17  5e                   pop esi
// 0045bd18  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
