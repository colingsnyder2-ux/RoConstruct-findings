// roc 2010-06 008245c0  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008245c0
//
// 008245c0  56                   push esi
// 008245c1  8bf1                 mov esi, ecx
// 008245c3  e80858f8ff           call 0x7a9dd0
// 008245c8  83f804               cmp eax, 4
// 008245cb  7410                 je 0x8245dd
// 008245cd  8bce                 mov ecx, esi
// 008245cf  e8fc57f8ff           call 0x7a9dd0
// 008245d4  83f802               cmp eax, 2
// 008245d7  7404                 je 0x8245dd
// 008245d9  33c0                 xor eax, eax
// 008245db  5e                   pop esi
// 008245dc  c3                   ret 
// 008245dd  b801000000           mov eax, 1
// 008245e2  5e                   pop esi
// 008245e3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
