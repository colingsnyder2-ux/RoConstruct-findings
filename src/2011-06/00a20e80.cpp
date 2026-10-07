// roc 2011-06 00a20e80  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20e80
//
// 00a20e80  b924a6cc00           mov ecx, 0xcca624
// 00a20e85  e8f650bbff           call 0x5d5f80
// 00a20e8a  68308ba300           push 0xa38b30
// 00a20e8f  e8c9a2deff           call 0x80b15d
// 00a20e94  59                   pop ecx
// 00a20e95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
