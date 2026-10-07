// roc 2011-06 00a17230  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17230
//
// 00a17230  b91c41cb00           mov ecx, 0xcb411c
// 00a17235  e84602a7ff           call 0x487480
// 00a1723a  68801da300           push 0xa31d80
// 00a1723f  e8193fdfff           call 0x80b15d
// 00a17244  59                   pop ecx
// 00a17245  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
