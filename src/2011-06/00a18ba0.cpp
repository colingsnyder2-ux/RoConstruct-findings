// from server: 100% by auto
// roc 2011-06 00a18ba0  unit: seg_00a10000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18ba0
//
// 00a18ba0  b9346ecb00           mov ecx, 0xcb6e34
// 00a18ba5  ff15bc04a400         call dword ptr [0xa404bc]
// 00a18bab  68b031a300           push 0xa331b0
// 00a18bb0  e8a825dfff           call 0x80b15d
// 00a18bb5  59                   pop ecx
// 00a18bb6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
