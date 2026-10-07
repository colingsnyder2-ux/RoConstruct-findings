// roc 2010-06 009d4ce0  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4ce0
//
// 009d4ce0  b9e0f1c100           mov ecx, 0xc1f1e0
// 009d4ce5  ff1504a49e00         call dword ptr [0x9ea404]
// 009d4ceb  68e05e9e00           push 0x9e5ee0
// 009d4cf0  e86e3dddff           call 0x7a8a63
// 009d4cf5  59                   pop ecx
// 009d4cf6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
