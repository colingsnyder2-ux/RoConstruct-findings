// roc 2010-06 00985d30  unit: seg_00980000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00985d30
//
// 00985d30  a100a49e00           mov eax, dword ptr [0x9ea400]
// 00985d35  50                   push eax
// 00985d36  6a06                 push 6
// 00985d38  6a1c                 push 0x1c
// 00985d3a  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 00985d40  51                   push ecx
// 00985d41  e8982de2ff           call 0x7a8ade
// 00985d46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
