// from server: 100% by auto
// roc 2008-06 007f3420  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3420
//
// 007f3420  b9804d9700           mov ecx, 0x974d80
// 007f3425  e8a64ec8ff           call 0x4782d0
// 007f342a  68b0d37f00           push 0x7fd3b0
// 007f342f  e87be3eaff           call 0x6a17af
// 007f3434  59                   pop ecx
// 007f3435  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
