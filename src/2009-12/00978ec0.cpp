// roc 2009-12 00978ec0  unit: seg_00970000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00978ec0
//
// 00978ec0  b9d85eb900           mov ecx, 0xb95ed8
// 00978ec5  ff15e8b69800         call dword ptr [0x98b6e8]
// 00978ecb  6840809800           push 0x988040
// 00978ed0  e854bae7ff           call 0x7f4929
// 00978ed5  59                   pop ecx
// 00978ed6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
