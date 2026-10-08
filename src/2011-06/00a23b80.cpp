// from server: 100% by auto
// roc 2011-06 00a23b80  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a23b80
//
// 00a23b80  b9f4c9cc00           mov ecx, 0xccc9f4
// 00a23b85  ff15bc04a400         call dword ptr [0xa404bc]
// 00a23b8b  68a0a4a300           push 0xa3a4a0
// 00a23b90  e8c875deff           call 0x80b15d
// 00a23b95  59                   pop ecx
// 00a23b96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
