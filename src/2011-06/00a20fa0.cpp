// from server: 100% by auto
// roc 2011-06 00a20fa0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20fa0
//
// 00a20fa0  b9d8a5cc00           mov ecx, 0xcca5d8
// 00a20fa5  e8066cbbff           call 0x5d7bb0
// 00a20faa  686088a300           push 0xa38860
// 00a20faf  e8a9a1deff           call 0x80b15d
// 00a20fb4  59                   pop ecx
// 00a20fb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
