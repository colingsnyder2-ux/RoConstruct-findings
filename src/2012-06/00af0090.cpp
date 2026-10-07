// roc 2012-06 00af0090  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0090
//
// 00af0090  b9804ee200           mov ecx, 0xe24e80
// 00af0095  e816c1a8ff           call 0x57c1b0
// 00af009a  687048b100           push 0xb14870
// 00af009f  e85131e9ff           call 0x9831f5
// 00af00a4  59                   pop ecx
// 00af00a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
