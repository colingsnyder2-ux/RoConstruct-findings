// roc 2011-06 00a21080  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21080
//
// 00a21080  b958a6cc00           mov ecx, 0xcca658
// 00a21085  e8d67ebbff           call 0x5d8f60
// 00a2108a  683086a300           push 0xa38630
// 00a2108f  e8c9a0deff           call 0x80b15d
// 00a21094  59                   pop ecx
// 00a21095  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
