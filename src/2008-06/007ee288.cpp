// roc 2008-06 007ee288  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee288
//
// 007ee288  68702a5000           push 0x502a70
// 007ee28d  6a06                 push 6
// 007ee28f  6a04                 push 4
// 007ee291  8d8530ffffff         lea eax, [ebp - 0xd0]
// 007ee297  50                   push eax
// 007ee298  e8be33ebff           call 0x6a165b
// 007ee29d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBV56@_NNH@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
