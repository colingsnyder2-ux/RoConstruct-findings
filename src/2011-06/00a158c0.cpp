// from server: 100% by auto
// roc 2011-06 00a158c0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a158c0
//
// 00a158c0  b91416cb00           mov ecx, 0xcb1614
// 00a158c5  e806d09eff           call 0x4028d0
// 00a158ca  68b000a300           push 0xa300b0
// 00a158cf  e88958dfff           call 0x80b15d
// 00a158d4  59                   pop ecx
// 00a158d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
