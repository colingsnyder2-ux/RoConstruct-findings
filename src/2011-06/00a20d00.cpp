// roc 2011-06 00a20d00  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20d00
//
// 00a20d00  b9bca5cc00           mov ecx, 0xcca5bc
// 00a20d05  e8b630bbff           call 0x5d3dc0
// 00a20d0a  68f08ea300           push 0xa38ef0
// 00a20d0f  e849a4deff           call 0x80b15d
// 00a20d14  59                   pop ecx
// 00a20d15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
