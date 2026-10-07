// roc 2011-06 00a16f40  unit: seg_00a10000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16f40
//
// 00a16f40  b91c38cb00           mov ecx, 0xcb381c
// 00a16f45  ff15b42da400         call dword ptr [0xa42db4]
// 00a16f4b  68c016a300           push 0xa316c0
// 00a16f50  e80842dfff           call 0x80b15d
// 00a16f55  59                   pop ecx
// 00a16f56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
