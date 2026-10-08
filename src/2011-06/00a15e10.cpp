// from server: 100% by auto
// roc 2011-06 00a15e10  unit: seg_00a10000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15e10
//
// 00a15e10  b9d424cb00           mov ecx, 0xcb24d4
// 00a15e15  ff15bc04a400         call dword ptr [0xa404bc]
// 00a15e1b  68100aa300           push 0xa30a10
// 00a15e20  e83853dfff           call 0x80b15d
// 00a15e25  59                   pop ecx
// 00a15e26  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
