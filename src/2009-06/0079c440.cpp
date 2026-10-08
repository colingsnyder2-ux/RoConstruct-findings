// roc 2009-06 0079c440  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c440
//
// 0079c440  56                   push esi
// 0079c441  8bf1                 mov esi, ecx
// 0079c443  e82832f8ff           call 0x71f670
// 0079c448  83f804               cmp eax, 4
// 0079c44b  7410                 je 0x79c45d
// 0079c44d  8bce                 mov ecx, esi
// 0079c44f  e81c32f8ff           call 0x71f670
// 0079c454  83f802               cmp eax, 2
// 0079c457  7404                 je 0x79c45d
// 0079c459  33c0                 xor eax, eax
// 0079c45b  5e                   pop esi
// 0079c45c  c3                   ret 
// 0079c45d  b801000000           mov eax, 1
// 0079c462  5e                   pop esi
// 0079c463  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
