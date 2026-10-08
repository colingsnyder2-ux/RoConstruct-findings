// from server: 100% by auto
// roc 2007-08 00777045  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777045
//
// 00777045  b9c0988c00           mov ecx, 0x8c98c0
// 0077704a  e82fe4faff           call 0x72547e
// 0077704f  6873cd7700           push 0x77cd73
// 00777054  e8ca9cebff           call 0x630d23
// 00777059  59                   pop ecx
// 0077705a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
