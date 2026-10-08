// from server: 100% by auto
// roc 2010-06 009cef80  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cef80
//
// 009cef80  b9b09bc100           mov ecx, 0xc19bb0
// 009cef85  ff1504a49e00         call dword ptr [0x9ea404]
// 009cef8b  68802b9e00           push 0x9e2b80
// 009cef90  e8ce9addff           call 0x7a8a63
// 009cef95  59                   pop ecx
// 009cef96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
