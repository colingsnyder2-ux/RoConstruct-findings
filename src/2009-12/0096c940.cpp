// roc 2009-12 0096c940  unit: seg_00960000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096c940
//
// 0096c940  b974f0b700           mov ecx, 0xb7f074
// 0096c945  ff15e8b69800         call dword ptr [0x98b6e8]
// 0096c94b  68e0fd9700           push 0x97fde0
// 0096c950  e8d47fe8ff           call 0x7f4929
// 0096c955  59                   pop ecx
// 0096c956  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
