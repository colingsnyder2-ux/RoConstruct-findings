// roc 2009-12 00932cb0  unit: seg_00930000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00932cb0
//
// 00932cb0  a1e4b69800           mov eax, dword ptr [0x98b6e4]
// 00932cb5  50                   push eax
// 00932cb6  6a06                 push 6
// 00932cb8  6a1c                 push 0x1c
// 00932cba  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 00932cc0  51                   push ecx
// 00932cc1  e8de1cecff           call 0x7f49a4
// 00932cc6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
