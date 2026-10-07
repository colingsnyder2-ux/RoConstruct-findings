// roc 2011-06 00a20e20  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20e20
//
// 00a20e20  b9a4a5cc00           mov ecx, 0xcca5a4
// 00a20e25  e8e648bbff           call 0x5d5710
// 00a20e2a  68208ca300           push 0xa38c20
// 00a20e2f  e829a3deff           call 0x80b15d
// 00a20e34  59                   pop ecx
// 00a20e35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
