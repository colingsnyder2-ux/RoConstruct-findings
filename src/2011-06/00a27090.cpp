// roc 2011-06 00a27090  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27090
//
// 00a27090  b9f0f2cc00           mov ecx, 0xccf2f0
// 00a27095  ff15bc04a400         call dword ptr [0xa404bc]
// 00a2709b  6870b9a300           push 0xa3b970
// 00a270a0  e8b840deff           call 0x80b15d
// 00a270a5  59                   pop ecx
// 00a270a6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
