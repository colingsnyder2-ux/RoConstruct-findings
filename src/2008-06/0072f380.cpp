// from server: 100% by auto
// roc 2008-06 0072f380  unit: CXTPControlGallery  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072f380
//
// 0072f380  6a00                 push 0
// 0072f382  6a00                 push 0
// 0072f384  81c17cfeffff         add ecx, 0xfffffe7c
// 0072f38a  e881f8ffff           call 0x72ec10
// 0072f38f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?RedrawScrollBar@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
