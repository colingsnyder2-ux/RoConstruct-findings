// roc 2010-06 00825b90  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825b90
//
// 00825b90  6a00                 push 0
// 00825b92  6a00                 push 0
// 00825b94  81c17cfeffff         add ecx, 0xfffffe7c
// 00825b9a  e881f8ffff           call 0x825420
// 00825b9f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
