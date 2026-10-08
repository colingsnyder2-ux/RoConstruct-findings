// roc 2009-06 0079da00  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079da00
//
// 0079da00  6a00                 push 0
// 0079da02  6a00                 push 0
// 0079da04  81c17cfeffff         add ecx, 0xfffffe7c
// 0079da0a  e881f8ffff           call 0x79d290
// 0079da0f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
