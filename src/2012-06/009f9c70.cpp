// roc 2012-06 009f9c70  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9c70
//
// 009f9c70  56                   push esi
// 009f9c71  8bf1                 mov esi, ecx
// 009f9c73  e8d8aaf8ff           call 0x984750
// 009f9c78  83f804               cmp eax, 4
// 009f9c7b  7410                 je 0x9f9c8d
// 009f9c7d  8bce                 mov ecx, esi
// 009f9c7f  e8ccaaf8ff           call 0x984750
// 009f9c84  83f802               cmp eax, 2
// 009f9c87  7404                 je 0x9f9c8d
// 009f9c89  33c0                 xor eax, eax
// 009f9c8b  5e                   pop esi
// 009f9c8c  c3                   ret 
// 009f9c8d  b801000000           mov eax, 1
// 009f9c92  5e                   pop esi
// 009f9c93  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
