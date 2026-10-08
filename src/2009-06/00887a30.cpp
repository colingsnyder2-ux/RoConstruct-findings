// from server: 100% by auto
// roc 2009-06 00887a30  unit: seg_00880000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887a30
//
// 00887a30  b928e0a300           mov ecx, 0xa3e028
// 00887a35  ff15c0e48900         call dword ptr [0x89e4c0]
// 00887a3b  6830588900           push 0x895830
// 00887a40  e8b620e9ff           call 0x719afb
// 00887a45  59                   pop ecx
// 00887a46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??__E?dummyString@RenderDevice@G3D@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
