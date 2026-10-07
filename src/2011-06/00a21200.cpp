// roc 2011-06 00a21200  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21200
//
// 00a21200  b998a7cc00           mov ecx, 0xcca798
// 00a21205  e8269fbbff           call 0x5db130
// 00a2120a  687082a300           push 0xa38270
// 00a2120f  e8499fdeff           call 0x80b15d
// 00a21214  59                   pop ecx
// 00a21215  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
