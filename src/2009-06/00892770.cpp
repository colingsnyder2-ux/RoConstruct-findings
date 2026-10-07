// roc 2009-06 00892770  unit: seg_00890000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892770
//
// 00892770  b94004a500           mov ecx, 0xa50440
// 00892775  ff15100c8a00         call dword ptr [0x8a0c10]
// 0089277b  6870d18900           push 0x89d170
// 00892780  e87673e8ff           call 0x719afb
// 00892785  59                   pop ecx
// 00892786  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
