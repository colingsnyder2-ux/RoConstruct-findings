// roc 2012-06 00af0130  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0130
//
// 00af0130  b9884ee200           mov ecx, 0xe24e88
// 00af0135  e886d8a8ff           call 0x57d9c0
// 00af013a  682048b100           push 0xb14820
// 00af013f  e8b130e9ff           call 0x9831f5
// 00af0144  59                   pop ecx
// 00af0145  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
