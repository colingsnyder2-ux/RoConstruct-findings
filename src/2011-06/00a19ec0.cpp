// from server: 100% by auto
// roc 2011-06 00a19ec0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19ec0
//
// 00a19ec0  b95c85cb00           mov ecx, 0xcb855c
// 00a19ec5  e8c64aaeff           call 0x4fe990
// 00a19eca  68003da300           push 0xa33d00
// 00a19ecf  e88912dfff           call 0x80b15d
// 00a19ed4  59                   pop ecx
// 00a19ed5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
