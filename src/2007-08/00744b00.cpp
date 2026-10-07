// roc 2007-08 00744b00  unit: seg_00740000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00744b00
//
// 00744b00  a1ace67700           mov eax, dword ptr [0x77e6ac]
// 00744b05  50                   push eax
// 00744b06  6a06                 push 6
// 00744b08  6a1c                 push 0x1c
// 00744b0a  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 00744b10  51                   push ecx
// 00744b11  e8e1bfeeff           call 0x630af7
// 00744b16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
