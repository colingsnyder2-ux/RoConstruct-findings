// from server: 100% by auto
// roc 2012-06 00b112b5  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b112b5
//
// 00b112b5  b918a5e500           mov ecx, 0xe5a518
// 00b112ba  e8a1acf6ff           call 0xa7bf60
// 00b112bf  688318b200           push 0xb21883
// 00b112c4  e82c1fe7ff           call 0x9831f5
// 00b112c9  59                   pop ecx
// 00b112ca  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
