// roc 2008-06 007f3390  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3390
//
// 007f3390  b9a04a9700           mov ecx, 0x974aa0
// 007f3395  e8d6fcd6ff           call 0x563070
// 007f339a  68c0d07f00           push 0x7fd0c0
// 007f339f  e80be4eaff           call 0x6a17af
// 007f33a4  59                   pop ecx
// 007f33a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
