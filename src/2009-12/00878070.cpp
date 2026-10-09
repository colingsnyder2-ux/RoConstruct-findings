// roc 2009-12 00878070  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878070
//
// 00878070  56                   push esi
// 00878071  8bf1                 mov esi, ecx
// 00878073  e848f3ffff           call 0x8773c0
// 00878078  85c0                 test eax, eax
// 0087807a  7513                 jne 0x87808f
// 0087807c  8bce                 mov ecx, esi
// 0087807e  e8cdf2ffff           call 0x877350
// 00878083  85c0                 test eax, eax
// 00878085  7408                 je 0x87808f
// 00878087  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 0087808d  5e                   pop esi
// 0087808e  c3                   ret 
// 0087808f  33c0                 xor eax, eax
// 00878091  5e                   pop esi
// 00878092  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
