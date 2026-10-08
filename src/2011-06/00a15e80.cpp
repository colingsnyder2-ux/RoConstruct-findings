// from server: 100% by auto
// roc 2011-06 00a15e80  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15e80
//
// 00a15e80  b93426cb00           mov ecx, 0xcb2634
// 00a15e85  e83632a1ff           call 0x4290c0
// 00a15e8a  68f00aa300           push 0xa30af0
// 00a15e8f  e8c952dfff           call 0x80b15d
// 00a15e94  59                   pop ecx
// 00a15e95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
