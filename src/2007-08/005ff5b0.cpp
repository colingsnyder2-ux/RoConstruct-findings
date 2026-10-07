// roc 2007-08 005ff5b0  unit: RBX::BallBallContact  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff5b0
//
// 005ff5b0  56                   push esi
// 005ff5b1  8b31                 mov esi, dword ptr [ecx]
// 005ff5b3  85f6                 test esi, esi
// 005ff5b5  7410                 je 0x5ff5c7
// 005ff5b7  8bce                 mov ecx, esi
// 005ff5b9  e80205feff           call 0x5dfac0
// 005ff5be  56                   push esi
// 005ff5bf  e89e060300           call 0x62fc62
// 005ff5c4  83c404               add esp, 4
// 005ff5c7  5e                   pop esi
// 005ff5c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
