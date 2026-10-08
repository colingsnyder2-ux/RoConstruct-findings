// from server: 100% by auto
// roc 2011-06 00a24a50  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24a50
//
// 00a24a50  b908d5cc00           mov ecx, 0xccd508
// 00a24a55  ff15bc04a400         call dword ptr [0xa404bc]
// 00a24a5b  6830aba300           push 0xa3ab30
// 00a24a60  e8f866deff           call 0x80b15d
// 00a24a65  59                   pop ecx
// 00a24a66  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
