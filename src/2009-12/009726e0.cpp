// roc 2009-12 009726e0  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009726e0
//
// 009726e0  b92c08b900           mov ecx, 0xb9082c
// 009726e5  ff15e8b69800         call dword ptr [0x98b6e8]
// 009726eb  68c0489800           push 0x9848c0
// 009726f0  e83422e8ff           call 0x7f4929
// 009726f5  59                   pop ecx
// 009726f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
