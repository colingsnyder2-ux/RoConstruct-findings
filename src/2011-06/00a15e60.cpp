// from server: 100% by auto
// roc 2011-06 00a15e60  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15e60
//
// 00a15e60  b93826cb00           mov ecx, 0xcb2638
// 00a15e65  e8862fa1ff           call 0x428df0
// 00a15e6a  68400ba300           push 0xa30b40
// 00a15e6f  e8e952dfff           call 0x80b15d
// 00a15e74  59                   pop ecx
// 00a15e75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
