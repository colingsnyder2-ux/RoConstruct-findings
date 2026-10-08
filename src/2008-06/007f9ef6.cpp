// from server: 100% by auto
// roc 2008-06 007f9ef6  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9ef6
//
// 007f9ef6  b9a8f29700           mov ecx, 0x97f2a8
// 007f9efb  e8d2bdfaff           call 0x7a5cd2
// 007f9f00  684a198000           push 0x80194a
// 007f9f05  e8a578eaff           call 0x6a17af
// 007f9f0a  59                   pop ecx
// 007f9f0b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
