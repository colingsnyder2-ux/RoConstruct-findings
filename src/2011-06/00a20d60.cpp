// roc 2011-06 00a20d60  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20d60
//
// 00a20d60  b954a8cc00           mov ecx, 0xcca854
// 00a20d65  e8c638bbff           call 0x5d4630
// 00a20d6a  68008ea300           push 0xa38e00
// 00a20d6f  e8e9a3deff           call 0x80b15d
// 00a20d74  59                   pop ecx
// 00a20d75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
