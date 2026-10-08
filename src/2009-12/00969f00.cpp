// roc 2009-12 00969f00  unit: seg_00960000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969f00
//
// 00969f00  b9f4cbb700           mov ecx, 0xb7cbf4
// 00969f05  ff158cbd9800         call dword ptr [0x98bd8c]
// 00969f0b  6890ed9700           push 0x97ed90
// 00969f10  e814aae8ff           call 0x7f4929
// 00969f15  59                   pop ecx
// 00969f16  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
