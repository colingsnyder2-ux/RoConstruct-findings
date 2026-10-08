// from server: 100% by auto
// roc 2011-06 00a182f0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a182f0
//
// 00a182f0  b96064cb00           mov ecx, 0xcb6460
// 00a182f5  e8c678a9ff           call 0x4afbc0
// 00a182fa  68b029a300           push 0xa329b0
// 00a182ff  e8592edfff           call 0x80b15d
// 00a18304  59                   pop ecx
// 00a18305  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
