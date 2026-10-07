// roc 2011-06 00a212c0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a212c0
//
// 00a212c0  b974a7cc00           mov ecx, 0xcca774
// 00a212c5  e876b2bbff           call 0x5dc540
// 00a212ca  689080a300           push 0xa38090
// 00a212cf  e8899edeff           call 0x80b15d
// 00a212d4  59                   pop ecx
// 00a212d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
