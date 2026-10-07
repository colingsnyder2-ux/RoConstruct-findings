// roc 2010-06 009c5f90  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5f90
//
// 009c5f90  b97c3cc000           mov ecx, 0xc03c7c
// 009c5f95  ff1504a49e00         call dword ptr [0x9ea404]
// 009c5f9b  6840c19d00           push 0x9dc140
// 009c5fa0  e8be2adeff           call 0x7a8a63
// 009c5fa5  59                   pop ecx
// 009c5fa6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
