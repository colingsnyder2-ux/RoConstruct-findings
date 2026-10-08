// from server: 100% by auto
// roc 2009-06 00893670  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893670
//
// 00893670  b91c2ba500           mov ecx, 0xa52b1c
// 00893675  e8608afbff           call 0x84c0da
// 0089367a  68e0d58900           push 0x89d5e0
// 0089367f  e87764e8ff           call 0x719afb
// 00893684  59                   pop ecx
// 00893685  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
