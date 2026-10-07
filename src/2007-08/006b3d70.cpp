// roc 2007-08 006b3d70  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3d70
//
// 006b3d70  e80bf8ffff           call 0x6b3580
// 006b3d75  85c0                 test eax, eax
// 006b3d77  7407                 je 0x6b3d80
// 006b3d79  8bc8                 mov ecx, eax
// 006b3d7b  e9a0ffffff           jmp 0x6b3d20
// 006b3d80  33c0                 xor eax, eax
// 006b3d82  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?GetItem@CXTPControlGallery@@QBEPAVCXTPControlGalleryItem@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
