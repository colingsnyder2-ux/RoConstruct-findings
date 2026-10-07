// roc 2011-06 00a20e00  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20e00
//
// 00a20e00  b9d0a6cc00           mov ecx, 0xcca6d0
// 00a20e05  e83646bbff           call 0x5d5440
// 00a20e0a  68708ca300           push 0xa38c70
// 00a20e0f  e849a3deff           call 0x80b15d
// 00a20e14  59                   pop ecx
// 00a20e15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
