// from server: 100% by auto
// roc 2008-06 007f8fd0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8fd0
//
// 007f8fd0  b9bcda9700           mov ecx, 0x97dabc
// 007f8fd5  ff15904c8000         call dword ptr [0x804c90]
// 007f8fdb  6860148000           push 0x801460
// 007f8fe0  e8ca87eaff           call 0x6a17af
// 007f8fe5  59                   pop ecx
// 007f8fe6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
