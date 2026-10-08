// from server: 100% by auto
// roc 2012-06 00af8170  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af8170
//
// 00af8170  b9a020e300           mov ecx, 0xe320a0
// 00af8175  e83666c2ff           call 0x71e7b0
// 00af817a  683077b100           push 0xb17730
// 00af817f  e871b0e8ff           call 0x9831f5
// 00af8184  59                   pop ecx
// 00af8185  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
