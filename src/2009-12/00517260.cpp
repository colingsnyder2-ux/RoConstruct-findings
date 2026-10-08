// roc 2009-12 00517260  unit: RBX::VInstance::?$NonFactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00517260
//
// 00517260  56                   push esi
// 00517261  8b31                 mov esi, dword ptr [ecx]
// 00517263  85f6                 test esi, esi
// 00517265  7410                 je 0x517277
// 00517267  8bce                 mov ecx, esi
// 00517269  e8626af3ff           call 0x44dcd0
// 0051726e  56                   push esi
// 0051726f  e8e6c52d00           call 0x7f385a
// 00517274  83c404               add esp, 4
// 00517277  5e                   pop esi
// 00517278  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
