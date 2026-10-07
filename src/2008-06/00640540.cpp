// roc 2008-06 00640540  unit: RBX::ArrowTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640540
//
// 00640540  56                   push esi
// 00640541  8b31                 mov esi, dword ptr [ecx]
// 00640543  85f6                 test esi, esi
// 00640545  7410                 je 0x640557
// 00640547  8bce                 mov ecx, esi
// 00640549  e8b2e1fcff           call 0x60e700
// 0064054e  56                   push esi
// 0064054f  e826010600           call 0x6a067a
// 00640554  83c404               add esp, 4
// 00640557  5e                   pop esi
// 00640558  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
