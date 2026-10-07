// roc 2012-06 00ae9b20  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9b20
//
// 00ae9b20  b9e481e100           mov ecx, 0xe181e4
// 00ae9b25  ff155426b200         call dword ptr [0xb22654]
// 00ae9b2b  686018b100           push 0xb11860
// 00ae9b30  e8c096e9ff           call 0x9831f5
// 00ae9b35  59                   pop ecx
// 00ae9b36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
