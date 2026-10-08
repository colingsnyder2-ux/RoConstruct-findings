// from server: 100% by auto
// roc 2008-06 007f9280  unit: seg_007f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9280
//
// 007f9280  b96ce19700           mov ecx, 0x97e16c
// 007f9285  e86623edff           call 0x6cb5f0
// 007f928a  68b0168000           push 0x8016b0
// 007f928f  e81b85eaff           call 0x6a17af
// 007f9294  59                   pop ecx
// 007f9295  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
