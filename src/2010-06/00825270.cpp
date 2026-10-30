// roc 2010-06 00825270  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825270
//
// 00825270  56                   push esi
// 00825271  8bf1                 mov esi, ecx
// 00825273  e848f3ffff           call 0x8245c0
// 00825278  85c0                 test eax, eax
// 0082527a  7513                 jne 0x82528f
// 0082527c  8bce                 mov ecx, esi
// 0082527e  e8cdf2ffff           call 0x824550
// 00825283  85c0                 test eax, eax
// 00825285  7408                 je 0x82528f
// 00825287  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 0082528d  5e                   pop esi
// 0082528e  c3                   ret 
// 0082528f  33c0                 xor eax, eax
// 00825291  5e                   pop esi
// 00825292  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
