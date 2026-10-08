// from server: 100% by auto
// roc 2008-06 007f2c10  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2c10
//
// 007f2c10  b9f0409700           mov ecx, 0x9740f0
// 007f2c15  ff1560248000         call dword ptr [0x802460]
// 007f2c1b  68f0cb7f00           push 0x7fcbf0
// 007f2c20  e88aebeaff           call 0x6a17af
// 007f2c25  59                   pop ecx
// 007f2c26  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
