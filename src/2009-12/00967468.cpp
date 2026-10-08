// roc 2009-12 00967468  unit: seg_00960000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967468
//
// 00967468  6820cc5c00           push 0x5ccc20
// 0096746d  6a06                 push 6
// 0096746f  6a04                 push 4
// 00967471  8d8530ffffff         lea eax, [ebp - 0xd0]
// 00967477  50                   push eax
// 00967478  e827d5e8ff           call 0x7f49a4
// 0096747d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBV56@_NNH@Z$7)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
