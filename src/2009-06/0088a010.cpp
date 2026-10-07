// roc 2009-06 0088a010  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088a010
//
// 0088a010  b9f845a400           mov ecx, 0xa445f8
// 0088a015  ff15c0e48900         call dword ptr [0x89e4c0]
// 0088a01b  6860788900           push 0x897860
// 0088a020  e8d6fae8ff           call 0x719afb
// 0088a025  59                   pop ecx
// 0088a026  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
