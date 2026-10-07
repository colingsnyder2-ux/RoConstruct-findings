// roc 2011-06 00a2f9a0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f9a0
//
// 00a2f9a0  b98c92d100           mov ecx, 0xd1928c
// 00a2f9a5  e8eecdf9ff           call 0x9cc798
// 00a2f9aa  6850fda300           push 0xa3fd50
// 00a2f9af  e8a9b7ddff           call 0x80b15d
// 00a2f9b4  59                   pop ecx
// 00a2f9b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
