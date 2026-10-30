// roc 2009-12 008773c0  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008773c0
//
// 008773c0  56                   push esi
// 008773c1  8bf1                 mov esi, ecx
// 008773c3  e8c8e8f7ff           call 0x7f5c90
// 008773c8  83f804               cmp eax, 4
// 008773cb  7410                 je 0x8773dd
// 008773cd  8bce                 mov ecx, esi
// 008773cf  e8bce8f7ff           call 0x7f5c90
// 008773d4  83f802               cmp eax, 2
// 008773d7  7404                 je 0x8773dd
// 008773d9  33c0                 xor eax, eax
// 008773db  5e                   pop esi
// 008773dc  c3                   ret 
// 008773dd  b801000000           mov eax, 1
// 008773e2  5e                   pop esi
// 008773e3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
