// roc 2010-06 009c1858  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c1858
//
// 009c1858  68f0ca5200           push 0x52caf0
// 009c185d  6a06                 push 6
// 009c185f  6a04                 push 4
// 009c1861  8d8530ffffff         lea eax, [ebp - 0xd0]
// 009c1867  50                   push eax
// 009c1868  e87172deff           call 0x7a8ade
// 009c186d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBV56@_NNH@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
