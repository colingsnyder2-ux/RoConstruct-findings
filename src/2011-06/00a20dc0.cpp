// from server: 100% by auto
// roc 2011-06 00a20dc0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20dc0
//
// 00a20dc0  b970a5cc00           mov ecx, 0xcca570
// 00a20dc5  e8d640bbff           call 0x5d4ea0
// 00a20dca  68108da300           push 0xa38d10
// 00a20dcf  e889a3deff           call 0x80b15d
// 00a20dd4  59                   pop ecx
// 00a20dd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
