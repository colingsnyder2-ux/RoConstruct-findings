// roc 2011-06 00a16fa0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16fa0
//
// 00a16fa0  b9043bcb00           mov ecx, 0xcb3b04
// 00a16fa5  e8a68da4ff           call 0x45fd50
// 00a16faa  68e018a300           push 0xa318e0
// 00a16faf  e8a941dfff           call 0x80b15d
// 00a16fb4  59                   pop ecx
// 00a16fb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
