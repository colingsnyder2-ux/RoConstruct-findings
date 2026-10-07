// roc 2012-06 009faaa0  unit: CXTPControlGallery  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009faaa0
//
// 009faaa0  e85bf1ffff           call 0x9f9c00
// 009faaa5  85c0                 test eax, eax
// 009faaa7  7407                 je 0x9faab0
// 009faaa9  8bc8                 mov ecx, eax
// 009faaab  e9e0fcffff           jmp 0x9fa790
// 009faab0  33c0                 xor eax, eax
// 009faab2  c20400               ret 4
// library xtp-13.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetItem@CXTPControlGallery@@QBEPAVCXTPControlGalleryItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPControlGallery.cpp
