// roc 2007-08 0076d840  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d840
//
// 0076d840  b9e0d08b00           mov ecx, 0x8bd0e0
// 0076d845  ff15a4e67700         call dword ptr [0x77e6a4]
// 0076d84b  68a07f7700           push 0x777fa0
// 0076d850  e8ce34ecff           call 0x630d23
// 0076d855  59                   pop ecx
// 0076d856  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
