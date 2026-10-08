// from server: 100% by auto
// roc 2011-06 00a19f20  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19f20
//
// 00a19f20  b95085cb00           mov ecx, 0xcb8550
// 00a19f25  e8d652aeff           call 0x4ff200
// 00a19f2a  68103ca300           push 0xa33c10
// 00a19f2f  e82912dfff           call 0x80b15d
// 00a19f34  59                   pop ecx
// 00a19f35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
