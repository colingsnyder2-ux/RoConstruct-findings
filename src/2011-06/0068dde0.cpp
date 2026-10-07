// roc 2011-06 0068dde0  unit: G3D::VVector2::?$TypedPropertyDescriptor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068dde0
//
// 0068dde0  56                   push esi
// 0068dde1  8b31                 mov esi, dword ptr [ecx]
// 0068dde3  85f6                 test esi, esi
// 0068dde5  7410                 je 0x68ddf7
// 0068dde7  8bce                 mov ecx, esi
// 0068dde9  e812fcffff           call 0x68da00
// 0068ddee  56                   push esi
// 0068ddef  e864c21700           call 0x80a058
// 0068ddf4  83c404               add esp, 4
// 0068ddf7  5e                   pop esi
// 0068ddf8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
