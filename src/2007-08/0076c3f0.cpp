// roc 2007-08 0076c3f0  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c3f0
//
// 0076c3f0  a1ace67700           mov eax, dword ptr [0x77e6ac]
// 0076c3f5  50                   push eax
// 0076c3f6  6a06                 push 6
// 0076c3f8  6a1c                 push 0x1c
// 0076c3fa  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 0076c400  51                   push ecx
// 0076c401  e8f146ecff           call 0x630af7
// 0076c406  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
