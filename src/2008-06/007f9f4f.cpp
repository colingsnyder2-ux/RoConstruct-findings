// from server: 100% by auto
// roc 2008-06 007f9f4f  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9f4f
//
// 007f9f4f  b914f39700           mov ecx, 0x97f314
// 007f9f54  e83dc2faff           call 0x7a6196
// 007f9f59  6869198000           push 0x801969
// 007f9f5e  e84c78eaff           call 0x6a17af
// 007f9f63  59                   pop ecx
// 007f9f64  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
