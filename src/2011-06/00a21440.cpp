// from server: 100% by auto
// roc 2011-06 00a21440  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21440
//
// 00a21440  b9c0b2cc00           mov ecx, 0xccb2c0
// 00a21445  ff15bc04a400         call dword ptr [0xa404bc]
// 00a2144b  688095a300           push 0xa39580
// 00a21450  e8089ddeff           call 0x80b15d
// 00a21455  59                   pop ecx
// 00a21456  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
