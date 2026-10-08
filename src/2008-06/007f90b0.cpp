// from server: 100% by auto
// roc 2008-06 007f90b0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f90b0
//
// 007f90b0  b95cda9700           mov ecx, 0x97da5c
// 007f90b5  ff1500438000         call dword ptr [0x804300]
// 007f90bb  68d0148000           push 0x8014d0
// 007f90c0  e8ea86eaff           call 0x6a17af
// 007f90c5  59                   pop ecx
// 007f90c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
