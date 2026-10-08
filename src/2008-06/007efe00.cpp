// from server: 100% by auto
// roc 2008-06 007efe00  unit: seg_007e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efe00
//
// 007efe00  b9fcef9600           mov ecx, 0x96effc
// 007efe05  ff1560248000         call dword ptr [0x802460]
// 007efe0b  68b0b07f00           push 0x7fb0b0
// 007efe10  e89a19ebff           call 0x6a17af
// 007efe15  59                   pop ecx
// 007efe16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
