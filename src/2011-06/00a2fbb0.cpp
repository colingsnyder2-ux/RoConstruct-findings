// from server: 100% by auto
// roc 2011-06 00a2fbb0  unit: seg_00a20000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fbb0
//
// 00a2fbb0  b990f0d100           mov ecx, 0xd1f090
// 00a2fbb5  ff150017a400         call dword ptr [0xa41700]
// 00a2fbbb  68d0fda300           push 0xa3fdd0
// 00a2fbc0  e898b5ddff           call 0x80b15d
// 00a2fbc5  59                   pop ecx
// 00a2fbc6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
