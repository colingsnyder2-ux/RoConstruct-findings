// roc 2012-06 00aff890  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff890
//
// 00aff890  b9ec8ae400           mov ecx, 0xe48aec
// 00aff895  e856a6c7ff           call 0x779ef0
// 00aff89a  6870b4b100           push 0xb1b470
// 00aff89f  e85139e8ff           call 0x9831f5
// 00aff8a4  59                   pop ecx
// 00aff8a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
