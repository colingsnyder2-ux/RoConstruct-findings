// from server: 100% by auto
// roc 2011-06 00a15ff0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15ff0
//
// 00a15ff0  b95c27cb00           mov ecx, 0xcb275c
// 00a15ff5  e89603a2ff           call 0x436390
// 00a15ffa  68a00ca300           push 0xa30ca0
// 00a15fff  e85951dfff           call 0x80b15d
// 00a16004  59                   pop ecx
// 00a16005  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
