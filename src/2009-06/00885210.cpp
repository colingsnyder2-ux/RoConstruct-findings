// from server: 100% by auto
// roc 2009-06 00885210  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885210
//
// 00885210  b938b1a300           mov ecx, 0xa3b138
// 00885215  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0088521b  68b0478900           push 0x8947b0
// 00885220  e8d648e9ff           call 0x719afb
// 00885225  59                   pop ecx
// 00885226  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
