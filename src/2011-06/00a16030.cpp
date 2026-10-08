// from server: 100% by auto
// roc 2011-06 00a16030  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16030
//
// 00a16030  b95828cb00           mov ecx, 0xcb2858
// 00a16035  e8a628a3ff           call 0x4488e0
// 00a1603a  68700ea300           push 0xa30e70
// 00a1603f  e81951dfff           call 0x80b15d
// 00a16044  59                   pop ecx
// 00a16045  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
