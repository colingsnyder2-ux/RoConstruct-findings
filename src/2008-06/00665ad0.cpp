// from server: 100% by auto
// roc 2008-06 00665ad0  unit: RBX::PartDragTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665ad0
//
// 00665ad0  56                   push esi
// 00665ad1  8b31                 mov esi, dword ptr [ecx]
// 00665ad3  85f6                 test esi, esi
// 00665ad5  7410                 je 0x665ae7
// 00665ad7  8bce                 mov ecx, esi
// 00665ad9  e822690000           call 0x66c400
// 00665ade  56                   push esi
// 00665adf  e896ab0300           call 0x6a067a
// 00665ae4  83c404               add esp, 4
// 00665ae7  5e                   pop esi
// 00665ae8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
