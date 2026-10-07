// roc 2007-08 0076c318  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c318
//
// 0076c318  68f0374600           push 0x4637f0
// 0076c31d  6a06                 push 6
// 0076c31f  6a04                 push 4
// 0076c321  8d8524ffffff         lea eax, [ebp - 0xdc]
// 0076c327  50                   push eax
// 0076c328  e8ca47ecff           call 0x630af7
// 0076c32d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBV56@_NNH@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
