// roc 2010-06 009cfdb0  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cfdb0
//
// 009cfdb0  b9cca9c100           mov ecx, 0xc1a9cc
// 009cfdb5  ff1504a49e00         call dword ptr [0x9ea404]
// 009cfdbb  6810339e00           push 0x9e3310
// 009cfdc0  e89e8cddff           call 0x7a8a63
// 009cfdc5  59                   pop ecx
// 009cfdc6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
