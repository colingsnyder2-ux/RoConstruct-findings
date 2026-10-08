// from server: 100% by auto
// roc 2009-06 008851f0  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008851f0
//
// 008851f0  b928b0a300           mov ecx, 0xa3b028
// 008851f5  e8363cbcff           call 0x448e30
// 008851fa  6880498900           push 0x894980
// 008851ff  e8f748e9ff           call 0x719afb
// 00885204  59                   pop ecx
// 00885205  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
