// roc 2012-06 0046f730  unit: CRobloxApp  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046f730
//
// 0046f730  56                   push esi
// 0046f731  8b31                 mov esi, dword ptr [ecx]
// 0046f733  85f6                 test esi, esi
// 0046f735  7410                 je 0x46f747
// 0046f737  8bce                 mov ecx, esi
// 0046f739  e8124a5000           call 0x974150
// 0046f73e  56                   push esi
// 0046f73f  e8d0295100           call 0x982114
// 0046f744  83c404               add esp, 4
// 0046f747  5e                   pop esi
// 0046f748  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
