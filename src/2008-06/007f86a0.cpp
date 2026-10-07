// roc 2008-06 007f86a0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f86a0
//
// 007f86a0  b980d29700           mov ecx, 0x97d280
// 007f86a5  ff1560248000         call dword ptr [0x802460]
// 007f86ab  68600a8000           push 0x800a60
// 007f86b0  e8fa90eaff           call 0x6a17af
// 007f86b5  59                   pop ecx
// 007f86b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
