// roc 2009-06 00893760  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893760
//
// 00893760  b9842ba500           mov ecx, 0xa52b84
// 00893765  e83654f8ff           call 0x818ba0
// 0089376a  6800d68900           push 0x89d600
// 0089376f  e88763e8ff           call 0x719afb
// 00893774  59                   pop ecx
// 00893775  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
