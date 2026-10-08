// from server: 100% by auto
// roc 2008-06 0072ddb0  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ddb0
//
// 0072ddb0  56                   push esi
// 0072ddb1  8bf1                 mov esi, ecx
// 0072ddb3  e8d8d1f7ff           call 0x6aaf90
// 0072ddb8  83f804               cmp eax, 4
// 0072ddbb  7410                 je 0x72ddcd
// 0072ddbd  8bce                 mov ecx, esi
// 0072ddbf  e8ccd1f7ff           call 0x6aaf90
// 0072ddc4  83f802               cmp eax, 2
// 0072ddc7  7404                 je 0x72ddcd
// 0072ddc9  33c0                 xor eax, eax
// 0072ddcb  5e                   pop esi
// 0072ddcc  c3                   ret 
// 0072ddcd  b801000000           mov eax, 1
// 0072ddd2  5e                   pop esi
// 0072ddd3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
