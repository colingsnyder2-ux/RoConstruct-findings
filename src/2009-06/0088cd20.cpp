// from server: 100% by auto
// roc 2009-06 0088cd20  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088cd20
//
// 0088cd20  b910b3a400           mov ecx, 0xa4b310
// 0088cd25  ff15c0e48900         call dword ptr [0x89e4c0]
// 0088cd2b  68009a8900           push 0x899a00
// 0088cd30  e8c6cde8ff           call 0x719afb
// 0088cd35  59                   pop ecx
// 0088cd36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
