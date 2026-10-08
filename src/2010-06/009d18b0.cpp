// from server: 100% by auto
// roc 2010-06 009d18b0  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d18b0
//
// 009d18b0  b948c5c100           mov ecx, 0xc1c548
// 009d18b5  ff1504a49e00         call dword ptr [0x9ea404]
// 009d18bb  6860419e00           push 0x9e4160
// 009d18c0  e89e71ddff           call 0x7a8a63
// 009d18c5  59                   pop ecx
// 009d18c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
