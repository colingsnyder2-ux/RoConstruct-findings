// roc 2009-12 00878990  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878990
//
// 00878990  6a00                 push 0
// 00878992  6a00                 push 0
// 00878994  81c17cfeffff         add ecx, 0xfffffe7c
// 0087899a  e881f8ffff           call 0x878220
// 0087899f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
