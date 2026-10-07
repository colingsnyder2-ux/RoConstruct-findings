// roc 2011-06 00a17150  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17150
//
// 00a17150  b9b83ecb00           mov ecx, 0xcb3eb8
// 00a17155  e846efa5ff           call 0x4760a0
// 00a1715a  68201ca300           push 0xa31c20
// 00a1715f  e8f93fdfff           call 0x80b15d
// 00a17164  59                   pop ecx
// 00a17165  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
