// roc 2011-06 00a20be0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20be0
//
// 00a20be0  b94ca6cc00           mov ecx, 0xcca64c
// 00a20be5  e89618bbff           call 0x5d2480
// 00a20bea  68c091a300           push 0xa391c0
// 00a20bef  e869a5deff           call 0x80b15d
// 00a20bf4  59                   pop ecx
// 00a20bf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
