// roc 2009-06 00891050  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891050
//
// 00891050  b95ceaa400           mov ecx, 0xa4ea5c
// 00891055  ff15c0e48900         call dword ptr [0x89e4c0]
// 0089105b  68e0bf8900           push 0x89bfe0
// 00891060  e8968ae8ff           call 0x719afb
// 00891065  59                   pop ecx
// 00891066  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
