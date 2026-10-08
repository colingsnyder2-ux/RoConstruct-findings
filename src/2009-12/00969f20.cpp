// roc 2009-12 00969f20  unit: seg_00960000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969f20
//
// 00969f20  b9a0cbb700           mov ecx, 0xb7cba0
// 00969f25  ff1568c69800         call dword ptr [0x98c668]
// 00969f2b  68a0ed9700           push 0x97eda0
// 00969f30  e8f4a9e8ff           call 0x7f4929
// 00969f35  59                   pop ecx
// 00969f36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
