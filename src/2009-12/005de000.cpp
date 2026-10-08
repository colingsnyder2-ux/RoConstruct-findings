// roc 2009-12 005de000  unit: RBX::ViewG3D  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005de000
//
// 005de000  56                   push esi
// 005de001  8b31                 mov esi, dword ptr [ecx]
// 005de003  85f6                 test esi, esi
// 005de005  7410                 je 0x5de017
// 005de007  8bce                 mov ecx, esi
// 005de009  e822feffff           call 0x5dde30
// 005de00e  56                   push esi
// 005de00f  e846582100           call 0x7f385a
// 005de014  83c404               add esp, 4
// 005de017  5e                   pop esi
// 005de018  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
