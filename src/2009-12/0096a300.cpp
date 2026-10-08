// roc 2009-12 0096a300  unit: seg_00960000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a300
//
// 0096a300  b950d0b700           mov ecx, 0xb7d050
// 0096a305  ff15e8b69800         call dword ptr [0x98b6e8]
// 0096a30b  6890ef9700           push 0x97ef90
// 0096a310  e814a6e8ff           call 0x7f4929
// 0096a315  59                   pop ecx
// 0096a316  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
