// roc 2009-06 00891130  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891130
//
// 00891130  b98ceba400           mov ecx, 0xa4eb8c
// 00891135  e876e7c0ff           call 0x49f8b0
// 0089113a  68f0bf8900           push 0x89bff0
// 0089113f  e8b789e8ff           call 0x719afb
// 00891144  59                   pop ecx
// 00891145  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
