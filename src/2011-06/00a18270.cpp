// from server: 100% by auto
// roc 2011-06 00a18270  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18270
//
// 00a18270  b97064cb00           mov ecx, 0xcb6470
// 00a18275  e8066ea9ff           call 0x4af080
// 00a1827a  68f02aa300           push 0xa32af0
// 00a1827f  e8d92edfff           call 0x80b15d
// 00a18284  59                   pop ecx
// 00a18285  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
