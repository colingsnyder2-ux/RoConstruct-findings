// roc 2011-06 00a21160  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21160
//
// 00a21160  b9c8a3cc00           mov ecx, 0xcca3c8
// 00a21165  e8d691bbff           call 0x5da340
// 00a2116a  680084a300           push 0xa38400
// 00a2116f  e8e99fdeff           call 0x80b15d
// 00a21174  59                   pop ecx
// 00a21175  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
