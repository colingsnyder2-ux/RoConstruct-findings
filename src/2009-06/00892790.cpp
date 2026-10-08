// from server: 100% by auto
// roc 2009-06 00892790  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892790
//
// 00892790  b92804a500           mov ecx, 0xa50428
// 00892795  ff15100c8a00         call dword ptr [0x8a0c10]
// 0089279b  6880d18900           push 0x89d180
// 008927a0  e85673e8ff           call 0x719afb
// 008927a5  59                   pop ecx
// 008927a6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
