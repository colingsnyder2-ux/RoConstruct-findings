// roc 2011-06 00a182d0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a182d0
//
// 00a182d0  b95064cb00           mov ecx, 0xcb6450
// 00a182d5  e81676a9ff           call 0x4af8f0
// 00a182da  68002aa300           push 0xa32a00
// 00a182df  e8792edfff           call 0x80b15d
// 00a182e4  59                   pop ecx
// 00a182e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
