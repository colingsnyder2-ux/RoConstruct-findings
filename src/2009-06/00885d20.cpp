// roc 2009-06 00885d20  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885d20
//
// 00885d20  b990c8a300           mov ecx, 0xa3c890
// 00885d25  ff15c0e48900         call dword ptr [0x89e4c0]
// 00885d2b  68d04e8900           push 0x894ed0
// 00885d30  e8c63de9ff           call 0x719afb
// 00885d35  59                   pop ecx
// 00885d36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
