// from server: 100% by auto
// roc 2010-06 004503f0  unit: CRobloxApp  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004503f0
//
// 004503f0  56                   push esi
// 004503f1  8b31                 mov esi, dword ptr [ecx]
// 004503f3  85f6                 test esi, esi
// 004503f5  7410                 je 0x450407
// 004503f7  8bce                 mov ecx, esi
// 004503f9  e832eeffff           call 0x44f230
// 004503fe  56                   push esi
// 004503ff  e896753500           call 0x7a799a
// 00450404  83c404               add esp, 4
// 00450407  5e                   pop esi
// 00450408  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
