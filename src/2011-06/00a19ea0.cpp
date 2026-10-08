// from server: 100% by auto
// roc 2011-06 00a19ea0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19ea0
//
// 00a19ea0  b94485cb00           mov ecx, 0xcb8544
// 00a19ea5  e81648aeff           call 0x4fe6c0
// 00a19eaa  68503da300           push 0xa33d50
// 00a19eaf  e8a912dfff           call 0x80b15d
// 00a19eb4  59                   pop ecx
// 00a19eb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
