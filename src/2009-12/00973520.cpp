// roc 2009-12 00973520  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973520
//
// 00973520  b9dc0eb900           mov ecx, 0xb90edc
// 00973525  ff15e8b69800         call dword ptr [0x98b6e8]
// 0097352b  68b04d9800           push 0x984db0
// 00973530  e8f413e8ff           call 0x7f4929
// 00973535  59                   pop ecx
// 00973536  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
