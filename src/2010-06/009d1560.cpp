// roc 2010-06 009d1560  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1560
//
// 009d1560  b948c2c100           mov ecx, 0xc1c248
// 009d1565  ff1504a49e00         call dword ptr [0x9ea404]
// 009d156b  6800409e00           push 0x9e4000
// 009d1570  e8ee74ddff           call 0x7a8a63
// 009d1575  59                   pop ecx
// 009d1576  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
