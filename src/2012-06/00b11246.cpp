// roc 2012-06 00b11246  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b11246
//
// 00b11246  b980a4e500           mov ecx, 0xe5a480
// 00b1124b  e8c6a7f6ff           call 0xa7ba16
// 00b11250  685a18b200           push 0xb2185a
// 00b11255  e89b1fe7ff           call 0x9831f5
// 00b1125a  59                   pop ecx
// 00b1125b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
