// from server: 100% by auto
// roc 2011-06 00638380  unit: RBX::CameraVerb  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00638380
//
// 00638380  56                   push esi
// 00638381  8b31                 mov esi, dword ptr [ecx]
// 00638383  85f6                 test esi, esi
// 00638385  7410                 je 0x638397
// 00638387  8bce                 mov ecx, esi
// 00638389  e8f2f9ffff           call 0x637d80
// 0063838e  56                   push esi
// 0063838f  e8c41c1d00           call 0x80a058
// 00638394  83c404               add esp, 4
// 00638397  5e                   pop esi
// 00638398  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
