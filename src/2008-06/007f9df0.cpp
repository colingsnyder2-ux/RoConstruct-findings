// roc 2008-06 007f9df0  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9df0
//
// 007f9df0  b924f29700           mov ecx, 0x97f224
// 007f9df5  e8d223fcff           call 0x7bc1cc
// 007f9dfa  6820198000           push 0x801920
// 007f9dff  e8ab79eaff           call 0x6a17af
// 007f9e04  59                   pop ecx
// 007f9e05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
