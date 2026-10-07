// roc 2008-06 007f9f65  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9f65
//
// 007f9f65  b940f39700           mov ecx, 0x97f340
// 007f9f6a  e8adc2faff           call 0x7a621c
// 007f9f6f  6873198000           push 0x801973
// 007f9f74  e83678eaff           call 0x6a17af
// 007f9f79  59                   pop ecx
// 007f9f7a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
