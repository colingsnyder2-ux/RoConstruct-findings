// roc 2011-06 00a21220  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21220
//
// 00a21220  b960a8cc00           mov ecx, 0xcca860
// 00a21225  e8c6a1bbff           call 0x5db3f0
// 00a2122a  682082a300           push 0xa38220
// 00a2122f  e8299fdeff           call 0x80b15d
// 00a21234  59                   pop ecx
// 00a21235  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
