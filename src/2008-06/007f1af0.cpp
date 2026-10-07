// roc 2008-06 007f1af0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1af0
//
// 007f1af0  b9880b9700           mov ecx, 0x970b88
// 007f1af5  ff1560248000         call dword ptr [0x802460]
// 007f1afb  6820ba7f00           push 0x7fba20
// 007f1b00  e8aafceaff           call 0x6a17af
// 007f1b05  59                   pop ecx
// 007f1b06  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
