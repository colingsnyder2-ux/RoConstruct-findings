// roc 2012-06 00af5190  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af5190
//
// 00af5190  b9ade1e200           mov ecx, 0xe2e1ad
// 00af5195  e8864abcff           call 0x6b9c20
// 00af519a  68c064b100           push 0xb164c0
// 00af519f  e851e0e8ff           call 0x9831f5
// 00af51a4  59                   pop ecx
// 00af51a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
