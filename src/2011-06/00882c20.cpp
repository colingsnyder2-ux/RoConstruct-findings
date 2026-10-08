// roc 2011-06 00882c20  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882c20
//
// 00882c20  6a00                 push 0
// 00882c22  6a00                 push 0
// 00882c24  81c17cfeffff         add ecx, 0xfffffe7c
// 00882c2a  e881f8ffff           call 0x8824b0
// 00882c2f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
