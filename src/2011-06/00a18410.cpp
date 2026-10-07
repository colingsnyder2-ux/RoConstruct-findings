// roc 2011-06 00a18410  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18410
//
// 00a18410  b94064cb00           mov ecx, 0xcb6440
// 00a18415  e8268fa9ff           call 0x4b1340
// 00a1841a  68e026a300           push 0xa326e0
// 00a1841f  e8392ddfff           call 0x80b15d
// 00a18424  59                   pop ecx
// 00a18425  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
