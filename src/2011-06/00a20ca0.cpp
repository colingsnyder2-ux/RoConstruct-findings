// roc 2011-06 00a20ca0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ca0
//
// 00a20ca0  b95ca8cc00           mov ecx, 0xcca85c
// 00a20ca5  e8a628bbff           call 0x5d3550
// 00a20caa  68e08fa300           push 0xa38fe0
// 00a20caf  e8a9a4deff           call 0x80b15d
// 00a20cb4  59                   pop ecx
// 00a20cb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
