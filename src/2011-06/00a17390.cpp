// from server: 100% by auto
// roc 2011-06 00a17390  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17390
//
// 00a17390  b91c43cb00           mov ecx, 0xcb431c
// 00a17395  e816f6a7ff           call 0x4969b0
// 00a1739a  68c01ea300           push 0xa31ec0
// 00a1739f  e8b93ddfff           call 0x80b15d
// 00a173a4  59                   pop ecx
// 00a173a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
