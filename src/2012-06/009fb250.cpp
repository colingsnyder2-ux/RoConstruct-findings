// roc 2012-06 009fb250  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb250
//
// 009fb250  6a00                 push 0
// 009fb252  6a00                 push 0
// 009fb254  81c17cfeffff         add ecx, 0xfffffe7c
// 009fb25a  e861f8ffff           call 0x9faac0
// 009fb25f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
