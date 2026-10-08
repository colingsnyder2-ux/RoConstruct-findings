// from server: 100% by auto
// roc 2010-06 009da300  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da300
//
// 009da300  b950c4c200           mov ecx, 0xc2c450
// 009da305  ff1514b29e00         call dword ptr [0x9eb214]
// 009da30b  6820929e00           push 0x9e9220
// 009da310  e84ee7dcff           call 0x7a8a63
// 009da315  59                   pop ecx
// 009da316  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
