// from server: 100% by auto
// roc 2011-06 00a2a1a0  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a1a0
//
// 00a2a1a0  b9f819cd00           mov ecx, 0xcd19f8
// 00a2a1a5  ff15bc04a400         call dword ptr [0xa404bc]
// 00a2a1ab  6840d1a300           push 0xa3d140
// 00a2a1b0  e8a80fdeff           call 0x80b15d
// 00a2a1b5  59                   pop ecx
// 00a2a1b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
