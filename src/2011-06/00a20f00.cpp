// roc 2011-06 00a20f00  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20f00
//
// 00a20f00  b970a4cc00           mov ecx, 0xcca470
// 00a20f05  e8b65bbbff           call 0x5d6ac0
// 00a20f0a  68f089a300           push 0xa389f0
// 00a20f0f  e849a2deff           call 0x80b15d
// 00a20f14  59                   pop ecx
// 00a20f15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
