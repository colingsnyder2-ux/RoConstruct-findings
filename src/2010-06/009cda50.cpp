// from server: 100% by auto
// roc 2010-06 009cda50  unit: seg_009c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cda50
//
// 009cda50  b9208fc100           mov ecx, 0xc18f20
// 009cda55  ff1504a49e00         call dword ptr [0x9ea404]
// 009cda5b  68b0219e00           push 0x9e21b0
// 009cda60  e8feafddff           call 0x7a8a63
// 009cda65  59                   pop ecx
// 009cda66  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
