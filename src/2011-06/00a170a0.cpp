// roc 2011-06 00a170a0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a170a0
//
// 00a170a0  b9043dcb00           mov ecx, 0xcb3d04
// 00a170a5  e8a617a5ff           call 0x468850
// 00a170aa  684019a300           push 0xa31940
// 00a170af  e8a940dfff           call 0x80b15d
// 00a170b4  59                   pop ecx
// 00a170b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
