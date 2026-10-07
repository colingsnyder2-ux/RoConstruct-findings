// roc 2011-06 00a24df0  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24df0
//
// 00a24df0  b980dbcc00           mov ecx, 0xccdb80
// 00a24df5  ff15bc04a400         call dword ptr [0xa404bc]
// 00a24dfb  6800aea300           push 0xa3ae00
// 00a24e00  e85863deff           call 0x80b15d
// 00a24e05  59                   pop ecx
// 00a24e06  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
