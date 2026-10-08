// from server: 100% by auto
// roc 2008-06 007eef70  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eef70
//
// 007eef70  b9e4ce9600           mov ecx, 0x96cee4
// 007eef75  e8f640d7ff           call 0x563070
// 007eef7a  6810a67f00           push 0x7fa610
// 007eef7f  e82b28ebff           call 0x6a17af
// 007eef84  59                   pop ecx
// 007eef85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
