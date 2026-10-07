// roc 2011-06 00a20fe0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20fe0
//
// 00a20fe0  b970a8cc00           mov ecx, 0xcca870
// 00a20fe5  e86671bbff           call 0x5d8150
// 00a20fea  68c087a300           push 0xa387c0
// 00a20fef  e869a1deff           call 0x80b15d
// 00a20ff4  59                   pop ecx
// 00a20ff5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
