// roc 2011-06 00881660  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881660
//
// 00881660  56                   push esi
// 00881661  8bf1                 mov esi, ecx
// 00881663  e858aef8ff           call 0x80c4c0
// 00881668  83f804               cmp eax, 4
// 0088166b  7410                 je 0x88167d
// 0088166d  8bce                 mov ecx, esi
// 0088166f  e84caef8ff           call 0x80c4c0
// 00881674  83f802               cmp eax, 2
// 00881677  7404                 je 0x88167d
// 00881679  33c0                 xor eax, eax
// 0088167b  5e                   pop esi
// 0088167c  c3                   ret 
// 0088167d  b801000000           mov eax, 1
// 00881682  5e                   pop esi
// 00881683  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsShowAsButton@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
