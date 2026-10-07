// roc 2011-06 00a21180  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a21180
//
// 00a21180  b950a7cc00           mov ecx, 0xcca750
// 00a21185  e88694bbff           call 0x5da610
// 00a2118a  68b083a300           push 0xa383b0
// 00a2118f  e8c99fdeff           call 0x80b15d
// 00a21194  59                   pop ecx
// 00a21195  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
