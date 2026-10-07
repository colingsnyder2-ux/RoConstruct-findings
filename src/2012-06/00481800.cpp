// roc 2012-06 00481800  unit: CRobloxDoc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00481800
//
// 00481800  56                   push esi
// 00481801  8b31                 mov esi, dword ptr [ecx]
// 00481803  85f6                 test esi, esi
// 00481805  7410                 je 0x481817
// 00481807  8bce                 mov ecx, esi
// 00481809  e8f2e5ffff           call 0x47fe00
// 0048180e  56                   push esi
// 0048180f  e800095000           call 0x982114
// 00481814  83c404               add esp, 4
// 00481817  5e                   pop esi
// 00481818  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
