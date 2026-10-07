// roc 2010-06 009da320  unit: seg_009d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da320
//
// 009da320  b9fcc3c200           mov ecx, 0xc2c3fc
// 009da325  ff1598af9e00         call dword ptr [0x9eaf98]
// 009da32b  6830929e00           push 0x9e9230
// 009da330  e82ee7dcff           call 0x7a8a63
// 009da335  59                   pop ecx
// 009da336  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
