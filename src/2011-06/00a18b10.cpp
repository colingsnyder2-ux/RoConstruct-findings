// roc 2011-06 00a18b10  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18b10
//
// 00a18b10  b9246ecb00           mov ecx, 0xcb6e24
// 00a18b15  e89680abff           call 0x4d0bb0
// 00a18b1a  68e030a300           push 0xa330e0
// 00a18b1f  e83926dfff           call 0x80b15d
// 00a18b24  59                   pop ecx
// 00a18b25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
