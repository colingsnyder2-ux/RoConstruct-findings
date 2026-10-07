// roc 2008-06 0072ebf0  unit: CXTPControlGallery  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ebf0
//
// 0072ebf0  e84bf1ffff           call 0x72dd40
// 0072ebf5  85c0                 test eax, eax
// 0072ebf7  7407                 je 0x72ec00
// 0072ebf9  8bc8                 mov ecx, eax
// 0072ebfb  e9e0fcffff           jmp 0x72e8e0
// 0072ec00  33c0                 xor eax, eax
// 0072ec02  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItem@CXTPControlGallery@@QBEPAVCXTPControlGalleryItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
