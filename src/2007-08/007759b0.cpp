// from server: 100% by auto
// roc 2007-08 007759b0  unit: seg_00770000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007759b0
//
// 007759b0  b9207d8c00           mov ecx, 0x8c7d20
// 007759b5  ff15a4e67700         call dword ptr [0x77e6a4]
// 007759bb  68e0c37700           push 0x77c3e0
// 007759c0  e85eb3ebff           call 0x630d23
// 007759c5  59                   pop ecx
// 007759c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
