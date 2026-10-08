// from server: 100% by auto
// roc 2012-06 00b085f0  unit: seg_00b00000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b085f0
//
// 00b085f0  b99402e500           mov ecx, 0xe50294
// 00b085f5  ff155426b200         call dword ptr [0xb22654]
// 00b085fb  68f0e2b100           push 0xb1e2f0
// 00b08600  e8f0abe7ff           call 0x9831f5
// 00b08605  59                   pop ecx
// 00b08606  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
