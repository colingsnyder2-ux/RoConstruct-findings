// roc 2007-08 0076d350  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d350
//
// 0076d350  b990be8b00           mov ecx, 0x8bbe90
// 0076d355  ff15acdd7700         call dword ptr [0x77ddac]
// 0076d35b  68007d7700           push 0x777d00
// 0076d360  e8be39ecff           call 0x630d23
// 0076d365  59                   pop ecx
// 0076d366  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
