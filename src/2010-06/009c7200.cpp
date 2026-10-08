// from server: 100% by auto
// roc 2010-06 009c7200  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7200
//
// 009c7200  b92051c000           mov ecx, 0xc05120
// 009c7205  ff1504a49e00         call dword ptr [0x9ea404]
// 009c720b  68f0cd9d00           push 0x9dcdf0
// 009c7210  e84e18deff           call 0x7a8a63
// 009c7215  59                   pop ecx
// 009c7216  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
