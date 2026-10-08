// from server: 100% by auto
// roc 2011-06 00a19f00  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19f00
//
// 00a19f00  b93485cb00           mov ecx, 0xcb8534
// 00a19f05  e82650aeff           call 0x4fef30
// 00a19f0a  68603ca300           push 0xa33c60
// 00a19f0f  e84912dfff           call 0x80b15d
// 00a19f14  59                   pop ecx
// 00a19f15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
