// from server: 100% by auto
// roc 2012-06 00b021d0  unit: seg_00b00000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b021d0
//
// 00b021d0  b978a9e400           mov ecx, 0xe4a978
// 00b021d5  ff155426b200         call dword ptr [0xb22654]
// 00b021db  68e0c0b100           push 0xb1c0e0
// 00b021e0  e81010e8ff           call 0x9831f5
// 00b021e5  59                   pop ecx
// 00b021e6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
