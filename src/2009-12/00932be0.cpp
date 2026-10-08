// roc 2009-12 00932be0  unit: seg_00930000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00932be0
//
// 00932be0  a1e4b69800           mov eax, dword ptr [0x98b6e4]
// 00932be5  50                   push eax
// 00932be6  6a06                 push 6
// 00932be8  6a1c                 push 0x1c
// 00932bea  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 00932bf0  51                   push ecx
// 00932bf1  e8ae1decff           call 0x7f49a4
// 00932bf6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
