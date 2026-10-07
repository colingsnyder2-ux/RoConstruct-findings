// roc 2009-06 00883b88  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00883b88
//
// 00883b88  6860d14900           push 0x49d160
// 00883b8d  6a06                 push 6
// 00883b8f  6a04                 push 4
// 00883b91  8d8530ffffff         lea eax, [ebp - 0xd0]
// 00883b97  50                   push eax
// 00883b98  e8d95fe9ff           call 0x719b76
// 00883b9d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBV56@_NNH@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
