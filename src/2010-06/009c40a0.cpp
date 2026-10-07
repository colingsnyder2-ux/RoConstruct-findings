// roc 2010-06 009c40a0  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c40a0
//
// 009c40a0  b9a819c000           mov ecx, 0xc019a8
// 009c40a5  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 009c40ab  6840b89d00           push 0x9db840
// 009c40b0  e8ae49deff           call 0x7a8a63
// 009c40b5  59                   pop ecx
// 009c40b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
